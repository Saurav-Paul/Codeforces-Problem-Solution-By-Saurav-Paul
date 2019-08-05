				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define endl '\n'
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define mp                    make_pair
#define clr(x)                x.clear()
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()

using ll = long long int ;
using namespace std;

using vec = vector<int> ;
bool flag = false;

void build_tree(vec &tree, vec &v, int st , int sp , int node){
	
	if(st==sp){
		tree[node]= v[st];
		return ;
	}
	
	int mid = st + ( (sp-st) >> 1);
	int lft = node << 1;
	int rght = lft + 1;
	
	build_tree(tree,v,st,mid,lft);
	build_tree(tree,v,mid+1,sp,rght);
	
}

void update_tree(vec &tree,int value, int l , int r, int st , int sp , int node){
	if(st > r or sp < l)
		return ;
		
	if(st >= l and sp <= r){
		
		if(flag)
			tree[node] = value;
		else
			tree[node] = max(tree[node],value);
		
		return ;
	}
	
	int mid = st + ( (sp-st) >> 1);
	int lft = node << 1;
	int rght = lft + 1;

	tree[lft] = max(tree[node],tree[lft]);
	tree[rght] = max(tree[node],tree[rght]);
	tree[node] = 0;
	
	update_tree(tree,value,l,r,st,mid,lft);
	update_tree(tree,value,l,r,mid+1,sp,rght);
	
}

int query_tree(vec &tree,int l , int r, int st, int sp , int node){
	
	if(st > r or sp < l)
		return 0;
	
	if(st >=l and sp <=r){
		return tree[node];
	}
	
	int mid = st + ( (sp-st) >> 1);
	int lft = node << 1;
	int rght = lft + 1;
	
	int s1= query_tree(tree,l,r,st,mid,lft);
	int s2= query_tree(tree,l,r,mid+1,sp,rght);
	
	return max({s1,s2,tree[node]});
}

int main()
{
	
	int n ;
	scanf("%d",&n);
	
	vec V(n);
	for(int &x : V)
		scanf("%d",&x);
	
	int q;
	scanf("%d",&q);
	
	vector<int> tree(4*n);
	
	build_tree(tree,V,0,n-1,1);

	while(q--){
		
		int op;
		scanf("%d",&op);
		
		if(op==1){
			int index , value;
			scanf("%d%d",&index,&value);
			flag = true;
			update_tree(tree,value,index-1,index-1,0,n-1,1);
		}
		else if(op==2){
			int value;
			scanf("%d",&value);
			flag = false ;
			update_tree(tree,value,0,n-1,0,n-1,1);
		}
		else
			assert(false);

		
	}
	
	for(int i = 0 ; i < n ; i++){
		int x = query_tree(tree,i,i,0,n-1,1);
		printf("%d ",x);
	}
	puts("");
	
	
    return 0;
}
