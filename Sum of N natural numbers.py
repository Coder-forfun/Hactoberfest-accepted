n=int(input("ENter Number : "))

def sumOfNNumbers(n):
    if n==1:
        return 1
    else:
        return sumOfNNumbers(n-1)+n
print(sumOfNNumbers(n))