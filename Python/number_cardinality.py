while True:
    user_input = input("Enter a number: ")

    try:
        if user_input.endswith("0"):
            print("Zero")
            break
        elif user_input.endswith("5"):
            print("Five")
            break
        elif int(user_input) % 2 == 0:
            print("Even")
            break
        else:
            print("Odd")
            break
    except:
        print("Wrong Input!")