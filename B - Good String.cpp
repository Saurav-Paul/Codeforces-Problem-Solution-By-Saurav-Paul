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
typedef pair<ll,ll> Pair;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////

int main()
{

    FAST_IO();
    ////////////////////////
    ll tcase;
    cin>>tcase;
    while(tcase--){
        ll n,temp, cnt=0;
        cin>>n;
        string s;
        cin>>s;
        bool flag=0;
        
        cnt=1;
        if(s.size()==1)
        cnt=0;
        else if(s[0]=='>' || s[s.size()-1]=='<')
            cnt=0;
        else{
            ll l=0,r=0;
            bool flag=1;
            ll sz=s.size();
            for(int i=0;i<sz ;i++){
                char c=s[i];
                if(c=='>' &&flag){
                    l=i;
                    flag=0;
                    break ;
                }
            }
             for(int i=sz-1;i>=0 ;i--){
                char c=s[i];
                if(c=='<'){
                    r=sz-1-i;
                    flag=0;
                    break ;
                }
            }
            cnt=min(l,r);
            
            
        }

        cout<<cnt<<endl;
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
