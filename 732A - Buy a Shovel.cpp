int find_ans(int n,int k,int r){
	int mul = n*k;
	int temp = mul-r;
	int temp1 = mul%10;
	int temp2 = temp1 - r;
	if(temp && temp1 && temp2 )
		return find_ans(n+1,k,r);
	return n;
}

int main()
{
	
	int k , r;
	scanf("%d%d",&k,&r);
	printf("%d\n",find_ans(1,k,r) );
	
    return 0;
}
