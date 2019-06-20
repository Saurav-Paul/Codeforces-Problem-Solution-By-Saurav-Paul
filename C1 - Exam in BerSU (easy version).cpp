				/*Saurav Paul*/
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1e9+7
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
using namespace std;

priority_queue <int> greatEle,tELe;

int find_it( int j,int sum , int m,int target){

	tELe = greatEle ;
	int cnt = 0;
	while(!tELe.empty()){
		if(m-sum >= target)
			break ;
		cnt++;
		sum-=tELe.top();
		tELe.pop();
	}
	
	
	return cnt ;
}

int main()
{
	int n , m;
	scanf("%d%d",&n,&m);
	vector <int > v(n);
	for(int &x : v)
		scanf("%d",&x);
		
	int sum = 0;
	for(int i = 0 ; i < n; i++){
		if(v[i] <= m-sum){
			printf("0 ");
		}
		else{
			
			printf("%d ",find_it(i, sum, m,v[i]));
			
		}
		sum += v[i];
		greatEle.push(v[i]);
	}
	puts("");
    return 0;
}
