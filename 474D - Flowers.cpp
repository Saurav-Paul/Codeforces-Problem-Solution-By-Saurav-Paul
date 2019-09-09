				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
using namespace std;

using vec = vector<int> ;
int t , k;
const int mod = 1000000007;
const int nax = 1e5 + 10;
vector<int> dp(nax,-1);
vec precom(nax+10,0);
vector<int> tree(nax*4);

int solve(int remain){
	
	if(dp[remain] != -1)
		return dp[remain]%mod;
		
	if(remain < k)
		return 1;
	
	return dp[remain]=(solve(remain-k)%mod+solve(remain-1)%mod)%mod;
	
}

void build_tree(int node,int st , int sp){
	if(st == sp){
		tree[node] = precom[st];
		return ;
	}
	int mid = st + ((sp-st)>>1);
	int lft = (node << 1);
	int rght = lft + 1;
	
	build_tree(lft,st,mid);
	build_tree(rght,mid+1,sp);
	tree[node] = ((tree[lft])%mod + (tree[rght]%mod)) %mod;
	return ;
}
int query(int node,int l, int r, int st ,int sp){

	if(l > sp or r < st)
		return 0;
		
	if(st >= l and sp <= r)
		return tree[node];

	int mid = st + ((sp-st)>>1 );
	int lft = (node << 1);
	int rght = lft + 1;
	
	return (query(lft,l,r,st,mid)%mod + query(rght,l,r,mid+1,sp)%mod)%mod;
}
int main()
{
	
	scanf("%d%d",&t,&k);

	for(int i = 1 ; i < nax ; i++)
		precom[i] = solve(i);
		
	build_tree(1,1,100001);
	
	for(int i = 1; i <= t ; i++){
		int a , b;
		scanf("%d%d",&a,&b);
		int x = query(1,a,b,1,100001);
		printf("%d\n",x);
	}
	
    return 0;
}
