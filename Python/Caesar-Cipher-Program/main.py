import art as a

alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']


print(a.logo)
rerun = True

while rerun == True:

    direction = input("Enter e for endcode , d for decode : ").lower()

    def caesar_cipher(txt,shift,dir):
        if shift > 26:
            return print("Shift cannot be greater than 26")
        caesar_cipher_txt = ""
        for i in range(len(txt)):
            if txt[i] in alphabet:
                index = alphabet.index(txt[i])
                if dir == 'e':
                    new_index = index + shift
                    if new_index >= 26:
                        new_index -= 26
                elif dir == 'd':
                    new_index = index - shift
                else :
                    return print("Not a valid option")

                caesar_cipher_txt += alphabet[new_index]
            else:
                caesar_cipher_txt += txt[i]

        if dir == 'e':        
            return print(f"The encrypted text is: {caesar_cipher_txt}\n")
        else:
            return print(f"The decrypted text is: {caesar_cipher_txt}")

    if direction == 'e' or direction == 'd':
        text = input("\nType your message:").lower()
        shift_index = int(input("\nType the shift number:"))
        if shift_index % 26 == 0:
            print(f"{shift_index} is multiple of 26. Try diffrent number for encoding else you will get the same result! ")
        else:
            shift_index %= 26
            caesar_cipher(text,shift_index,direction)
    else:
        print("Not a valid option")
    
    if input("Do you want to run again ? y/n : ").lower() != 'y':
        rerun = False
    

print(a.bye)