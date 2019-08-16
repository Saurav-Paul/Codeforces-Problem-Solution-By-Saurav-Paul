
n=int(input())
t1 = list(map(int,input().split()))
t2 = list(map(int,input().split()))
if t1[0]!=t2[0] or t2[n-1]!=t1[n-1] :
	print('No')
	exit()
l1 =list()
l2 =list()
 
for i in range(0,n):
	if i==0 :
		l1.append(t1[i])
	else:
		l1.append(t1[i]-t1[i-1])
	if i==n-1:
		l1.append(t1[i])
		
for i in range(0,n):
	if i==0 :
		l2.append(t2[i])
	else:
		l2.append(t2[i]-t2[i-1])
	if i==n-1:
		l2.append(t2[i])
		
l1.sort()
l2.sort()
 
if l1==l2 :
	print('Yes')
else :
	print('No')
 
