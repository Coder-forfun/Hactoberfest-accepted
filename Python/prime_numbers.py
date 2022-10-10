
# Author: Álvaro Masanori Sato

def is_prime(num):
    for n in range(2, num):
        if num % n == 0:
            return False
    return True

if __name__ == "__main__":
    prime_num = input("How many prime numbers do you want?: ")


    if(prime_num.strip().isdigit()):
        prime_num = int(prime_num)
        if(prime_num < 2):
            print("No prime numbers bellow 2")
        else:
            prime = []
            prime_len = 0
            i = 2
            while(prime_len < prime_num):
                if(is_prime(i)):
                    prime.append(i)   
                    prime_len = prime_len + 1
                i = i + 1

    else:
        print("Your input it's not a number!!!")

    print(prime)