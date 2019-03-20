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
#define SZ(x)                 (x).size()
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
typedef pair<ll,ll>Pair;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////
bool check[6000000];
int main()
{

    FAST_IO();
    ////////////////////////
    ll n;
    cin>>n;
    std::vector<ll> v;
    std::vector<ll> vt;
    std::vector<ll> nv;
    ll mx=-INT_MAX;
    for(int i=0 ; i< n-1 ;i++){
        ll temp;
        cin>>temp;
        v.pb(temp);
        vt.pb(temp);
        
        if(i==0){
            mx=temp;
          
        }
        else
        {
            v[i]=temp+v[i-1];
            mx=max(v[i],mx);
            
        }
    }
   
    if(mx<=0){
        nv.pb(n);
        check[n]=1;
    }
    else{
        nv.pb(n-mx);
        check[n-mx]=1;;
 
    }
    bool flag=true ;
    ll t=nv[0];
    if(t<1 || t>n)
        flag=false;
    
    if(flag)
    for(int i=0; i< n-1 ;i++){
        t=t+vt[i];
        if(t<1 || t>n){
            flag=false ;
            break;
        }
        nv.pb(t);
        ll temp=t;
        
        if(check[temp]==1)
        {
            flag=false;
            break;
        }
        check[temp]=1;


    }
    if(flag){
        ll sz=SZ(nv);
        for(int i=0; i< sz ; i++)
            cout<<nv[i]<<" ";
        cout<<endl;
    }
    else
        cout<<-1<<endl;
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
