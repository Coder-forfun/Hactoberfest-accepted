def bit_stuffing(sig):
    onec = 0
    d = 0
    one = [ ]
    s = list(sig)
    for i in s :
        d += 1
        if i == '0' :
            onec = 0
        else:
            onec += 1
        if onec == 5 :
            one.append(d)
            onec =0
    k = 0
    for i in one:
        s.insert(i+k,'0')
        k += 1
    return s

def destuffing(sig):
    oneb = 0
    d = 0
    one = [ ]
    sig = list(sig)
    for i in sig :
        d += 1
        if i == '0' :
            oneb = 0
        else:
            oneb += 1
        if oneb == 5 :
            one.append(d)
            oneb =0
    k = 0
    for i in one:
        sig.pop(i+k)
        k -= 1
    return sig

sig = input("Enter the signal : ")
print("Orignal signal : ", sig)
stf = bit_stuffing(sig)
print("Stuffed signal : ", stf)
dstf = destuffing(sig)
print("Destuffed signal : ", sig)