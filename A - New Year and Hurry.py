n,t=input().split()
n,t=int(n),int(t)
total_time=240-t
cnt=0
time=0
for i in range(1,11) :
    time+= (i*5);
    if(time>total_time or i>n) :
        break
    cnt+=1
print(cnt)
