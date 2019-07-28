
def main():
	a , b = map(int,input().split())
	i = 1
	while 1:
		if(i&1):
			if(a >= i):
				a -= i
			else :
				print("Vladik")
				break 
		else :
			if( b >= i):
				b -= i
			else :
				print("Valera")
				break 
		i +=1 
if __name__ == '__main__':
	main()
