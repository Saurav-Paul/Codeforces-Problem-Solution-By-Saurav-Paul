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
bool file=0,rt=0;
clock_t tStart ;
void FAST_IO();
////////////////////////
double find_distance( double x, double y){

    return sqrt((x*x)+(y*y));
}
int main()
{

    FAST_IO();
    ////////////////////////
    string s; ll cnt=0;
    while(cin>>s && s!="END"){
        double x=0,y=0,digit=0,k=0;
        for(int i=0,sz=s.size(); i<sz ; i++){
            char c; c=s[i];
            if(c=='N'){

                if(s[i+1]=='E'){
                    x+=((1/sqrt(2))*digit);
                    y+=((1/sqrt(2))*digit);
                    i++;
                }
                else if(s[i+1]=='W'){
                    x-=((1/sqrt(2))*digit);
                    y+=((1/sqrt(2))*digit);
                    i++;
                }
                else{
                    y+=digit;
                }
                k=digit=0;
            }
            else if(c=='E'){
                x+=digit;
                k=digit=0;
            }
            else if(c=='S'){
                if(s[i+1]=='E'){
                    x+=((1/sqrt(2))*digit);
                    y-=((1/sqrt(2))*digit);
                    i++;
                }
                else if(s[i+1]=='W'){
                    x-=((1/sqrt(2))*digit);
                    y-=((1/sqrt(2))*digit);
                    i++;
                }
                else{
                    y-=digit;
                }
                k=digit=0;
            }
            else if(c=='W'){
                x-=digit;
                k=digit=0;
            }
            else if(c==',' || c=='.')
                continue ;
            else{
            digit*=10;
            digit+=(s[i]-'0');
        }
    }
    cout<<"Map #"<<++cnt<<endl;
    cout<<"The treasure is located at ("<<x<<","<<y<<")."<<endl;
    cout<<"The distance to the treasure is "<<find_distance(x,y)<<"."<<endl<<endl;
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
    cout.setf(ios::fixed);
    cout.precision(3);
    if(rt && file){ tStart = clock(); }
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}
