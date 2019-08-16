from __future__ import print_function


def gcd(a,b):
	while b:
		a,b = b, a%b
	return a

def cal(i,n):
	temp = 0
	while n > 0:
		temp += n%i
		n = n// i
	return temp


n=int(input())
sum = 0
for base  in range(2,n):
	sum += cal(base,n)
n -= 2
print(sum//gcd(sum,n),n//gcd(sum,n),sep='/')
# ~ print(gcd(5,10))
