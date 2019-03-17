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

int main()
{

    FAST_IO();
    ////////////////////////
    ll hh , mm , H,D,C,N;
    cin>>hh>>mm>>H>>D>>C>>N;
    double temp1=0,temp2=0;

    temp1=H/N;
    if(H%N!=0)
        temp1++;
    // cout<<temp1<<endl;
    temp1*=C;
    // cout<<temp1<<endl;
    ll time=0;
    if(hh<20){
        time=20-hh;
        time*=60;
        time-=mm;
    }
    temp2= time*D+ H ;
    H=temp2 ;
    temp2 =H/N ;
    if(H%N!=0)
        temp2++;
    temp2*=C;
    temp2=(80.0 * temp2)/100 ;
    cout<<min(temp1,temp2)<<endl;
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
    cout.setf(ios::fixed);
    cout.precision(4);
    if(rt && file){ tStart = clock(); }
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}
