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
    string s;
    cin>>s;
    ll sz=s.size();
    int flag=1;
    for(int i=0; i<sz ;i++){
        if(i<2){
            if(s[i]=='C')
                cout<<'B';
            else
                cout<<'D';
            flag++;
        }
        else{
            if(s[i-2]=='C' && s[i-1]=='C' && s[i]=='C' && flag==3)
                cout<<'P',flag=1;
            else if(s[i-2]=='S' && s[i-1]=='S' && s[i]=='S' && flag==3)
                cout<<'T',flag=1;
            else if(s[i]=='C'){
                cout<<'B';
                flag++;
            }
            else if(s[i]=='S'){
                cout<<'D';
                flag++;
            }
            flag=min(3,flag);
        }
    }
    cout<<endl;

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
