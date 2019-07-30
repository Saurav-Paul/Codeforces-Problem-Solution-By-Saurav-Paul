from __future__ import print_function

n = int(input())
s = input()

zero = 0 
one = 0
for x in s:
	if(x=='0'):
		zero +=1
	else :
		one +=1

if one>0:
	print("1",end="")

for i in range(0,zero):
	print("0",end="")

print("")
