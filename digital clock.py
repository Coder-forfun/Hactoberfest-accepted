from tkinter import *
from tkinter import ttk
from tkinter import font
import time
import datetime

def quit(*args):
    root.destroy()


def clock_time():
    time = datetime.datetime.now()
    time = (time.strftime("Date: %d-%m-%Y \nTime: %H:%M:%S \n \nHave A Nice Day.\nand keep hacking ! "))
    txt.set(time)

    root.after(1000, clock_time)


root = Tk()
# root.attributes("-fullscreen", False)
root.configure(bg="black")
root.bind("x", quit)
root.geometry("1200x600")
root.title("Digital Clock Gui By Pradipto Karmakar")
root.after(1000, clock_time)

fnt = font.Font(family="helvetica", size=80, weight="bold")
txt = StringVar()
lbl = ttk.Label(root, textvariable=txt, font=fnt, foreground="cyan", background="black")
lbl.place(relx=0.5, rely=0.5, anchor=CENTER)

root.mainloop()

#end of the clock :(