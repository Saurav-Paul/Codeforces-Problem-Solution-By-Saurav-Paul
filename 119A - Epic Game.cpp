def gcd(a , b) :
    if b==0  :
        return a
    else    :
        return gcd(b,a%b)

t,m,n=input().split()
n,m,t=int(n),int(m),int(t)
i=1
flag = True
while (i):
    if i%2==1 :
        num=gcd(t,n)
        if num>n :
            flag=False
            break
        n=n-num
    else :
        num1=gcd(m,n)
        if num1>n :
            break
        n=n-num1
    i=i+1
if(flag):
    print(0)
else:
    print(1)

    
