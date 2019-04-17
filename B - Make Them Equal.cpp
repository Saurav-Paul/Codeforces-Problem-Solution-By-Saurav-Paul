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
#define scn(num)              scanf("%lld ",&num);
#define dbg(n)                cout<<(n)<<endl;
using namespace std;
const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;
bool file=1,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////

int main()
{

    FAST_IO();
    ////////////////////////
    ll n; cin>>n;
    ll temp;
    vec num;
    for(int i=0; i<n ; i++){
        cin>>temp;
        num.pb(temp);
    }
    
    bool flag=true;
    for(int i=1; i<n ; i++){
        if(num[i]!=num[i-1]){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<0<<endl;
        return 0;
    }
    for(int i=1; i<=100; i++){
        ll cb=0,cc=0,ca=0;
        int a=num[0], b=num[0]-i, c=num[0]+i;
        for(int j=0; j<n ; j++){
            if(num[j]==a)
                ca++;
            if(num[j]-i==a)
                ca++;
            if(num[j]+i==a)
                ca++;

            if(num[j]==b)
                cb++;
            if(num[j]-i==b)
                cb++;
            if(num[j]+i==b)
                cb++;

            if(num[j]==c)
                cc++;
            if(num[j]-i==c)
                cc++;
            if(num[j]+i==c)
                cc++;
        }
        if(ca==n || cb==n || cc==n){
            cout<<i<<endl;
            return 0;
        }

    }
    cout<<-1<<endl;
    ////////////////////////
    if(rt && file){
     printf("\nTime taken: %.6fs", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    }
    return 0;
   }

void FAST_IO()
{
    // ios_base::sync_with_stdio(0);
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
