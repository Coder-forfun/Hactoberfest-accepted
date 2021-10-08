n=int(input("Enter Number of test cases: "))
for i in range(0,n,1):
    x=input("Enter String: ")
    firsthalf=[]
    secondhalf=[]
    f=[]
    s=[]
    l=len(x)//2
    if len(x)%2!=0:
        for  i in range(0,len(x)):
            if i<l:
                firsthalf.append(x[i])
            elif(i>l):
                secondhalf.append(x[i])
    else:
        for  i in range(0,len(x)):
            if i<l:
                firsthalf.append(x[i])
            elif(i>=l):
                secondhalf.append(x[i])
    dict1=dict()
    dict2=dict()
#     Try
    # for i in firsthalf:
    #     if i not in f:
    #         f.append(i)
    # for i in secondhalf:
    #     if i not in s:
    #         s.append(i)
    # firsthalf=sorted(f)
    # secondhalf=sorted(s)
    # if(firsthalf==secondhalf):
    #     print("YES")
    # else:
    #     print("NO")





    # testCases = int(input())
    # while testCases:
    #     testCases -= 1
    #     string = input()  # input is already in string format so no need to type-cast
    #     halve = len(string) // 2
    #     if len(string) % 2 == 0:
    #         if sorted(string[:halve]) == sorted(string[halve:]):
    #             print('YES')
    #         else:
    #             print('NO')
    #     else:
    #         if sorted(string[:halve]) == sorted(string[halve + 1:]):
    #             print('YES')
    #         else:
    #             print('NO')
