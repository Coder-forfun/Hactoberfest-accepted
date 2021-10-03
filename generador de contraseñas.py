"""
Programa que nos permite generar contraseñas aleatorias.

Solo debes pasar como entrada la longitud maxima que quieres que tenga la contraseña.

Tambien puedes elegir si quieres guardar la contraseña en un archivo de texto.
"""

#Importamos la siguiente libreria
from random import choice

#Creamos un funcion que sera la que cree los archivos de texto
def saveFile(content):
    #Le pedimos al usuario que decida si quiere guardar la contraseña en un archivo
    opc = input("Quieres guardar la contraseña en un archivo TXT? ")
    #Si el usuaro escribe que si
    if opc == "si":
        #Creamos un archivo en el cual escribiremos la contraseña que generemos
        with open("Contraseña.txt", "w") as filePass:
            filePass.write(content)
            filePass.close()
            print("Archivo creado correctamente!!!")
    #Si el usuario escribe que no, mostramos un mensaje y finalizamos el programa
    elif opc == "no":
        print("Programa finalizado!!!")
    #Si el usuario escribe una opción no valida
    else:
        print("Opción invalida, solo puedes elegir: si o no")
        saveFile(content)

#Le pedimos al usuario que introduzca la longitud de la contraseña
longitud = int(input("Introduze la longitud maxima de la contraseña: "))
#En una variable guardamos todos los caracteres que contendra la contraseña (Puedes agregar los que tu quieras)
valores = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"

#Creamos una variable que contendra la contraseña
password = ""
#A la variable "password" le asignamos el valor iterando los valores que ingrsamos, con un bucle for con el rango de la longitud ingrsada.
password = password.join([choice(valores) for i in range(longitud)])
#Mostramos la contraseña generado
print("Contraseña: "+password+"\n")
#Llamamos la a la función que nos permite guardar la contraseña en un archivo de texto
#y le pasamos como argumento el contenido del archivo el cul sera la variable "password"
saveFile(password)

