n=int(input("Enter number: "))
m=int(input("Enter modulo number: "))
r,p,i,p1,p2=1,0,0,0,1
q1,q2=1,1
mod=m
while r>0:
    if i==0:
        p=0
        q1=m//n
    elif i==1:
        p=1
        q2=m//n
    else:
        p=(p1-(p2*q1))%mod
        p1=p2
        p2=p
        q1=q2
        q2=m//n
    print('{}={}({})+{}  p({})={}'.format(m,m//n,n,m%n,i,p))
    i+=1
    r=m%n
    m=n
    n=r
print('p({})={}'.format(i,(p1-(p2*q1))%mod))