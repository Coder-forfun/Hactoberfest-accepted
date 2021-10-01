a, b = map(int, input().split())
print('''Choose the operation
1. Addition     2. Subtraction    3. Multiplication    4. Division    5. Exit''')
op = int(input())
if op == 1:
    print(a+b)
elif op == 2:
    print(a-b)
elif op == 3:
    print(a*b)
elif op == 4:
    try:
        print(a/b)
    except ZeroDivisionError:
        print("Divide by zero error!")
else:
    exit
