d = int(input())
n = int(input())
cnt = 0
ara = list(map(int,input().split()))
 
for t in  range(0,n-1):
	cnt +=(d-ara[t])
	
print(cnt)
