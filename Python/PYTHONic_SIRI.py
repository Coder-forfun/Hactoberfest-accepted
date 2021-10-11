import wikipedia
import pyttsx3
import datetime
import webbrowser
import speech_recognition as sr
import os
import smtplib

engine = pyttsx3.init('sapi5')
voices = engine.getProperty('voices')
# print(voices)

engine.setProperty('voice', voices[1].id)
# print(voices[1].id)


def speak(audio):
    engine.say(audio)
    engine.runAndWait()


def wishMe():
    """This function greets the user as per time"""
    hour = int(datetime.datetime.now().hour)

    if hour >= 0 and hour < 12:
        speak("Hellow!,Good Morning")
    elif hour >= 12 and hour < 18:
        speak("Hellow!,Good afternoon")
    else:
        speak("Hellow!,Good evening")

    speak("I'm your siri here. How may I help You?")


def takeCommand():
    """This function is for taking user input command and return string from speech command"""
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        r.pause_threshold = 1
        audio = r.listen(source)

    try:
        print("Recognizing...")
        query = r.recognize_google(audio, language='en-in')
        print(f"User said : {query}\n")

    except Exception as e:
        print(e)  # remove this its not pretty thing
        speak("Say that again please....")
        print("Say that again please....")
        return "None"
    return query



def sendEmail(to,content):
    """This function is for sending email which is not in use right now so partially coded"""
    server = smtplib.SMTP('smtp.gmail.com',587)
    server.ehlo()
    server.starttls()
    server.login('Mail id','Password')



if __name__ == "__main__":
    wishMe()

    while True:
        query = takeCommand().lower()

        # Logic for executing task
        if 'wikipedia' in query:
            speak("Searching wikipedia...")
            query = query.replace("wikipedia", "")
            results = wikipedia.summary(query, sentences=2)
            speak("According to wikipedia")
            speak(results)

        elif 'who are you' in query:
            speak("I am your virtual friend Siri. I'm here to guide you.")
        
        elif 'who am i' in query:
            speak("You are chirag chavda. Nice to have you sir!")

        elif 'open youtube' in query:
            webbrowser.open("youtube.com")
            speak("Opening youtube...")

        elif 'open google' in query:
            webbrowser.open("google.com")
            speak("Opening google...")

        elif 'play music' in query:
            webbrowser.open("https://music.youtube.com/watch?v=MJyKN-8UncM&list=OLAK5uy_n-xk0iDlOmnqKpzEuN3pHFXhvgC06NTJk")
            speak("Playing music...")

        elif 'time' in query:
            strTime = datetime.datetime.now().strftime("%H:%M:%S")
            speak(f"The time is {strTime}")

        elif 'vs code'in query:
            speak("Opening Visual Studio Code")
            path_code = "C:\\Users\\kisha\\AppData\\Local\\Programs\\Microsoft VS Code\\Code.exe"
            os.startfile(path_code)

        elif 'email to chirag' in query:
            try:
                speak("What should I send?")
                content = takeCommand()
                to = "thisischirag0369@gmail.com"
                sendEmail(to,content)
                speak("Your email has been sent successfully!")
            except Exception as e:
                speak("Can not do this right now. You have not write sufficient code.")
                speak("Some error occurred, sorry!!")

        elif 'exit' in query:
            speak("Quitting....Thanks for your worthy time. Hope you've enjoyed")
            break
        
