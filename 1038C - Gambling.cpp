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
    vll a, b;
    for(int i=0,temp; i< n ; i++)  
        cin>>temp,a.pb(temp);
    for(int i=0,temp ; i<n ;i++)
        cin>>temp,b.pb(temp);
    sort(all(a),greater<ll>());
    sort(all(b),greater<ll>()); 
    // for(int i=0; i<a.size() ; i++){
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
    // for(int i=0; i<b.size() ; i++)
    //     cout<<b[i]<<" ";
    // cout<<endl;

    ll i=0,j=0,up=0,low=0;
    for(int k=1; k<=2*n ;k++){
        if(k%2){
            if(a[i]>=b[j] && i<n){
                up+=a[i];
                i++;
            }
            else if(j<n){
                j++;
            }
            else
                up+=a[i],i++;
        }
        else{
            if(b[j]>=a[i] && j<n){
                low+=b[j];
                j++;
            }
            else if(i<n){
                i++;
            }
            else
                low+=b[j],j++;
        }
        // cout<<a[i]<<" "<<b[j]<<"="<<up<<" "<<low<<endl;
    }
    cout<<up-low<<endl;
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
