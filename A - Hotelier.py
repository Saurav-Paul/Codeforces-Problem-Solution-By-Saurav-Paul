room = [0]*10
 
def putInLeft():
	for i in range(0,10):
		if room[i]==0:
			room[i]=1
			break
 
def putInRight():
	i = 9
	while i>=0:
		if room[i]==0:
			room[i]=1
			break
		i -= 1
 
n = int(input())
s = input()
#print(room)
for x in s:
	if x=='L':
		putInLeft()
	elif x=='R':
		putInRight()
	else :
		room[int(x)]=0
	
 
for m in room:
	print(m,end='')
