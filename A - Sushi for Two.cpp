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

int main()
{

    FAST_IO();
    ////////////////////////
    ll n;
    cin>> n;
    std::vector<ll> vec;
    ll ans=0;
    bool tuna=1,ell=1;
    ll ct=0, cel=0;
    for(ll i=0; i< n; i++){
        ll temp;
        cin>> temp;
        if(temp==1){ 
            ct++;
            if(ell){
                vec.pb(cel);
                ell=0;
                tuna=1;
            }
            cel= 0 ;
        }
        else if( temp==2 ){            
            cel++;
            if(tuna){
                vec.pb(ct);
                tuna=0;
                ell=1;
            }
            ct= 0; 
        }
    }
    if(ell){
         vec.pb(cel);
         tuna=0;
    }
    if(tuna){
        vec.pb(ct);
    }
        ll sz=vec.size();
        for(int i=1; i< sz-1; i++){
            ans=max(ans, min(vec[i], vec[i+1]));
        }


    cout<<ans*2<<endl;


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
