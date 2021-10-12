'''
Strong number : Sum of factorials of each digit must equal to the number itself
Eg. 145 (1 + 24 + 120 = 145)
'''


n = int(input('Enter number '))
b = 0
d = n
while n!=0:
    c = 1
    a = n%10
    for i in range(1, a+1):
        c*=i
    n//=10
    b+=c
if b == d:
    print('Strong number')
else:
    print('Not a strong number')
