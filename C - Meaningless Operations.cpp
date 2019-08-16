from math import *
from operator import xor
def bruteforce(n):
	mx = 0
	for i in range(1,n):
		mx = max(mx,gcd(xor(i,n),i&n))
		
	print(mx)
 
def find_great_div(n):
	ans = 1
	for i in range(2,n):
		if(i*i > n):
			break
		if (n%i == 0):
			ans = max(ans,i)
			ans = max(ans,n//i)
	
	print(ans)
	
	
def solve(n):
	base = int(ceil(log2(n+1)))
	#print('base = ',base)
	num = int(pow(2,base)) -1
	#print('Num = ', num)
	if n==num :
		find_great_div(n)
	else:
		print(num)
	
	
	
testcase = int(input())
while testcase :
	testcase -= 1
	n = int(input())
	#bruteforce(n)
	solve(n)
