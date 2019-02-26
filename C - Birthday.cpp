#include<bits/stdc++.h>
#define endl '\n'
#define _time_ clock_t tStart = clock();
#define _show_ printf("\nTime taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
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
void FAST_IO();
////////////////////////

int main()
{
    _time_ 
    FAST_IO();
    ////////////////////////
    ll n;
    cin>>n;
    vector<ll> v;
    vector<ll> ans;
    loop(1,n){
        ll temp;
        cin>>temp;
        v.pb(temp);
        ans.pb(0);
    }
    sort(all(v));
    
    for(int i=0,j=n-1,l=0;l<=j;i++){
        if(i%2){
            ans[j]=v[i];
            j--;
        }
        else{
            ans[l]=v[i];
            l++;
        }
    }
    loop(1,n){
        cout<<ans[i-1]<<" ";
    }
    cout<<endl;
    ////////////////////////
    if(file && rt){ _show_ } 
    return 0;
   }

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(2);
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}
