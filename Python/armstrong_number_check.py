'''
Armstrong number : Sum of each digit raised to power of digit count must equal to number itself
Eg. 153 (1 + 125 + 27 = 153)
'''

n = int(input('Enter number '))
b = n
c = n
a = 0
count = 0
while n!=0:
    count += 1
    n//=10
while b!=0:
    d = (b%10)
    a += (d**count)
    b//=10
if a == c:
    print('Armstrong number')
else:
    print('Not an Armstrong number')
