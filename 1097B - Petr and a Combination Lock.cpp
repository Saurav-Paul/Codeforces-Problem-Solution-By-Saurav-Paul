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
#define vi                    vector<int>
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
ll store[18][370];
ll level[18];
ll n;
ll find_out(ll lvl, ll value){
    if(lvl==n+1){
        if(value)
            return 2 ;
        return 1 ;
    }
    if(store[lvl][value]) 
        return store[lvl][value];
    store[lvl][value]= min(find_out(lvl+1 , (value+level[lvl])%360 ) , find_out(lvl+1 , (value+360-level[lvl])%360));
    return store[lvl][value];
}
int main()
{

    FAST_IO();
    ////////////////////////
    cin>>n;
    for(int i=1; i<= n ; i++){
        
        cin>> level[i];
    }
    if(find_out(1,0)==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


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
