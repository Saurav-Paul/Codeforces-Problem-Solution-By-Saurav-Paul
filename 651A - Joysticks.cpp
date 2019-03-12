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
using namespace std;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////
ll mem[105][105];
ll find_ans(ll a, ll b){
	if(a<=0 || b<=0)
		return 0;
	if(mem[a][b]!=-1 )
		return mem[a][b];
	if(mem[b][a]!=-1 )
		return mem[b][a];
	if(a<=b)
		return mem[a][b]=find_ans(a+1,b-2)+1;
	else
		return mem[a][b]=find_ans(a-2,b+1)+1;
	
}
int main()
{

    FAST_IO();
    ////////////////////////
    
    memset(mem,-1, sizeof(mem));
    mem[1][1]=0;
    ll a , b;
    cin>>a>>b;
    cout<<find_ans(a,b)<<endl;
   
    ////////////////////////
    if(rt && file){
     printf("\nTime taken: %.6fs", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    }
    return 0;
   }

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);
    if(rt && file){ tStart = clock(); }
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}
