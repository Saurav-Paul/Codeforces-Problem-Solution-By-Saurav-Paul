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
const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<ll> vll;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////

int main()
{

    FAST_IO();
    ////////////////////////
    ll n; cin>>n;
    vll num,rem(2*100000+90,0); 
    ll maximum=-1, index=0 ,digit=-1;
    for(int i=0, temp; i< n ; i++){
        cin>>temp; num.pb(temp);
        rem[temp]++;
        if(rem[temp]>maximum){
            maximum=rem[temp];
            if(digit!=temp){
            index=i;
            digit=temp;
        }
        }
    }    
    cout<<n-maximum<<endl;
    for(int i=index ; i>0;  i--){
        ll temp=num[i-1];
        if(temp<digit){
            cout<<1<<" "<<i<<" "<<i+1<<endl;
        }
        else if(temp>digit){
            cout<<2<<" "<<i<<" "<<i+1<<endl;
        }
    }
    for(int i=index ; i<n-1; i++){
        ll temp=num[i+1];
        if(temp<digit){
            cout<<1<<" "<<i+2<<" "<<i+1<<endl;
        }
        else if(temp>digit){
            cout<<2<<" "<<i+2<<" "<<i+1<<endl;
        }
    }
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
