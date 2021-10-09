import pyttsx3
import PyPDF2
from tkinter.filedialog import *

book = askopenfilename()
pdfReader = PyPDF2.PdfFileReader(book)
pages = pdfReader.numPages


speaker = pyttsx3.init()
for num in range(4, pages):
    page = pdfReader.getPage(num)
    myText = page.extractText()
    speaker = pyttsx3.init()
    speaker.say(myText)
    speaker.runAndWait()
