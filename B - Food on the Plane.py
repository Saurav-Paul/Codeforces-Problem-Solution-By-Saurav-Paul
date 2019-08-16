
 
def cal(n,op):
	por = n//4
	now = n%4
	cnt = por*4 + (por*12)
	
	if(now==2 or now==0):
		cnt += 7
	x='fedabc'
	
	m = 0
	for l in x:
		m += 1
		if op==l:
			cnt +=m
			break
	return cnt
	
def cal2(n,op):
	ans = 16*int(n//4)
	if n&1 :
		ans += 7
	x = 'fedabc'
	ans += x.find(op) + 1
	return ans
 
s = input()
n = len(s)
op = s[n-1]
num = int(s[0:n-1])
#print (cal(num,op))
print (cal2(num-1,op))
 
#    999999999999999992c
#    3999999999999999965
