import qrcode
code=qrcode.QRCode(version=5,box_size=15,border=5)
link=input("copy the content:")
code.add_data(link)
code.make(fit=True)
img=code.make_image(fill="black",back_color="white")
img.save(input("Enter the Qrcode name:")+".png")