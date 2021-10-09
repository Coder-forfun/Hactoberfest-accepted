import re
import pyttsx3
import speech_recognition as sr
import datetime
import wikipedia
import webbrowser
import os
import random
import smtplib

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
# print(voices[1].id)
engine.setProperty('voice', voices [0].id)


def speak(audio):
    engine.say(audio)
    engine.runAndWait()


def wishme():
    hour = int(datetime.datetime.now().hour)

    if hour > 0 and hour < 12:
        speak("Good Morning Sir.")

    elif hour>=12 and hour<18:
        speak("Good Afternoon Sir.")

    else:
        speak("Good Evening Sir.")
    speak("I am vector     your    assistance..... Please.... tell   me  may  i  help  you.")


def takecommand():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Lishining...")
        r.dynamic_energy_threshold=300
        r.pause_threshold=1.0
        audio = r.listen(source)

    try:
        print("Recognizing...")
        query = r.recognize_google(audio, language='en-in')
        print(f'used said:{query}')
    except Exception as e:
        # print(e)
        speak("")
        return "none"
    return query


def sendemail(to, content):
    server = smtplib.SMTP('smtp.gmail.com',587)
    server.ehlo()
    server.starttls()
    server.login('rajputvikrant1408@gmail.com', 'Sunita_1999')
    server.sendmail('rajputvikrant1408@gmail.com', to, content)
    server.close()


if __name__ == "__main__":

    name = takecommand().lower()
    i = 0
    while name == 'hey' or name == 'hey vector' or name == 'vector' or name == 'hello vector' or name == 'actor':
        if i == 0:
            wishme()
            i += 1

        query = takecommand().lower()

        if 'wikipedia' in query:
            speak('serching wikipedia...')
            query = query.replace('wikipedia', "")
            result = wikipedia.summary(query, sentences=3)
            speak("according to wikipedia")
            speak(result)

        elif 'hey' in query or 'hey vector' in query or 'vector' in query or 'hello vector' in query or 'actor' in query:
            speak("welcome back sir....may i help you.")

        elif 'tell me something about you' in query or 'who are you' in query:
            speak("i am vector........... sir....your project")

        elif 'what are you doing' in query:
            speak("nothing ........sir")

        elif 'who am i' in query:
            speak("you must be boss ya phir boss ke kamine dost")
            # speak("Sir ..i don't have eyes. and you don't make a function for recognise person.. ")

        elif 'open youtube' in query:
            webbrowser.open('youtube.com')

        elif 'open google' in query:
            webbrowser.open('google.com')

        elif 'open facebook' in query:
            webbrowser.open('facebook.com')

        elif 'open gaana' in query:
            webbrowser.open('www.gaana.com/')

        elif 'play music' in query:
            music_dir = 'D:\\songs'
            songs = os.listdir(music_dir)
            # print(songs)
            os.startfile(os.path.join(music_dir, songs[5]))

        elif 'play video' in query or 'play movie' in query:
            movie_dir = 'D:\\Movie'
            movie = os.listdir(movie_dir)
            n = len(movie)
            # print(n)
            os.startfile(os.path.join(movie_dir, movie[random.randrange(3, n)]))

        elif 'time' in query or 'date' in query:
            strtime = datetime.datetime.now().strftime("%I:%M:%S")
            strdate = datetime.datetime.now().strftime("%d:%B:%Y")
            strday = datetime.datetime.now().strftime("%A")
            speak(f"Sir   the  time   is   {strtime} .................  date is {strdate} and day is   {strday}")

        elif 'open code' in query:
            codepath = "C:\\Users\\iamvi\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe"
            os.startfile(codepath)

        elif 'open chrome' in query:
            codepath = "C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe"
            os.startfile(codepath)

        elif 'solve' in query:
            query = query.replace("solve", '')
            query = query.replace("add", '+')
            query = query.replace("to", '2')
            query = query.replace("subtraction", '-')
            query = query.replace("multiply", '*')
            query = query.replace("divide", '/')
            query = query.replace("square", '**2')
            query = query.replace("power", '**')
            query = query.replace("open becket", '(')
            query = query.replace("close becket", ')')
            query = re.sub("[a-z]", '', query)
            try:
                result = eval(query)
                speak(result)
            except SyntaxError as s:
                # print(s)
                speak("sorry sir..... i don't recognise carefully....")




        elif 'email to vikrant' in query:
            try:
                speak('What you i say.')
                content= takecommand()
                to ='vikrantrajput140897@gmail.com'
                sendemail(to,content)
                speak('email has been sended')

            except Exception as e:
                print(e)
                speak('Sorry email does not send.')

        elif 'goodbye' in query:
            speak("Good bye Sir. See you later")
            name = False
