def sieve(n):
  prime = [True for i in range(n+5)]
  prime[0]=False
  prime[1]=False
  pnt = 2
  while(pnt<=n**0.5):
    if prime[pnt]==True:
      for j in range(pnt*pnt,n+5,pnt):
        prime[j]=False
    pnt+=1
  
  for i in range(2,n):
    if prime[i]==True:
      print(i)
