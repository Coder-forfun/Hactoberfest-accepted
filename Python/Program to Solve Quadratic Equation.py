#Quadratic Equation solver with Python
# Solve the quadratic equation ax**2 + bx + c = 0

print('Welcome to Quadratic equation solver...\n')
print('Quadratic equation is in the form of ax^2 + bx + c = 0,')
a=int(input("Enter the value of 'a':"))
b=int(input("Enter the value of 'b':"))
c=int(input("Enter the value of 'c':"))

# calculate the discriminant
d=(b**2)-(4*a*c)

xa=((0-b)+(d**0.5))/(2*a)
xb=((0-b)-(d**0.5))/(2*a)

print('Equation => (',a,')x^2 +(',b,')x +(',c,')','= 0',sep='')
print('         => {x+(',(-1)*xa,')}*{x+(',(-1)*xb,')} = 0',sep='')
      
print('         => x =',xa,'or',xb)
print('d = (b^2 - 4ac) =',d)
print('\nThanyou for using Quadratic equation solver.')
