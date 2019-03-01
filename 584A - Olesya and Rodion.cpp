t,n=input().split()
n,t=int(n),int(t)
if(t<=1 and n==10) :
    print(-1)
elif(n==10) :
    print(n,end="")
    for i in range(2,t) :
        print('0',end="")
else    :
    print(n,end="")
    for i in range(1,t) :
        print('0',end="")
print()
