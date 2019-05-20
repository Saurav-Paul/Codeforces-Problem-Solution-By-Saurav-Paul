#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vl                    vector<ll>
#define SZ(x)                 (x).size()
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
#define dbg(x)                cerr <<"( "<<#x << " = " << x << " )"<<endl
using namespace std;
const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;;
void FAST_IO();
void ara_read(vec &v,ll n);
////////////////////////
void do_operation(string &s,const string &t, int node,vector<int> &move){
	assert(s[node]!=t[node]); // just checking if there any bug...
	// let's find the minimum lenth match
	int k=node+1;
	while(1){
		if(s[k]==t[node])
			break ;
		++k;
	}
	// push the moves..
	for(int i=k ; i>node; --i){
		swap(s[i],s[i-1]);
		// i should push i-1 but since it 0 -base, so i push i.
		move.emplace_back(i);
	}
	return ;
}
int main()
{
	ios_base::sync_with_stdio(0);
	ll n; cin>>n;
	string s, t; cin>>s>>t;
	string temp1=s;
	string temp2=t;
	sort(all(temp1));
	sort(all(temp2));
	// if temp1 and temp2 isn't same then it's impossible...
	if(temp1!=temp2){
		puts("-1");
		return 0;
	}
	vector<int> move;
	for(int i=0; i< n; i++){
		//if not same then do operation...
		if(s[i]!=t[i]){
			
			do_operation(s,t,i,move);
		}
		
	}
	printf("%d\n",(int)move.size());
	// printing the moves...
	for(auto i : move)
		printf("%d ",i);
	puts("");
	
    return 0;
}

void FAST_IO()
{
    // ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);

}
void ara_read(vec &v,ll n){
	ll temp;
	for(ll i=0; i<n; i++){
		scanf("%lld",&temp);
		v.emplace_back(temp);
	}
	
}
