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
typedef pair<ll,string>Pair;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////

int main()
{

    FAST_IO();
    ////////////////////////
    ll n,temp;
    string s, final;
    cin>>n ;
    std::vector<Pair> vitamins;
    Pair p;
    ll A=-1, B=-1, C=-1,ABC=-1;
    for(int i=0 ; i< n ;i++){
        final="000";
        cin>>temp;
        cin>>s;
        p.F=temp;
        ll sz=SZ(s);
        for(int j=0; j< sz; j++){
            char c=s[j];
            if(c=='A')
                final[0]='1';
            if(c=='B')
                final[1]='1';
            if(c=='C')
                final[2]='1';
        }
        p.S=final;
        vitamins.pb(p);
        if(final=="100"){
            if(A==-1)
                A=temp;
            else
                A=min(A,temp);
        }
        else if(final=="010"){
            if(B==-1)
                B=temp;
            else
                B=min(B,temp);
        }
        else if(final=="001"){
            if(C==-1)
                C=temp;
            else
                C=min(C,temp);
        }
        else if(final=="111"){
            if(ABC==-1)
                ABC=temp;
            else
                ABC=min(ABC,temp);
        }
    }

    bool flag= false ;
    ll ans=INT_MAX;
    if(A!=-1 && B!=-1 && C!=-1){
        ans=A+B+C;
        flag=true ;
    }  
    if(ABC!=-1){
        ans=min(ans, ABC);
        flag=true ;
    }

    for(int i=0; i< n-1; i++){
        ll temp=0;
        string a, b ;
        a=vitamins[i].S;
        
        for(int j=i+1 ; j< n ; j++){
            bool t=true ;
            b=vitamins[j].S;
            ll sz=a.size();
            for(int k=0; k<sz ; k++){
                if(a[k]!='1' && b[k]!='1'){
                    t=false ;
                    break;
                }
            }
            if(t){
                temp=vitamins[i].F + vitamins[j].F;
                ans=min(ans,temp);
                flag=true;
            }
        }
    }

    if(flag)
        cout<<ans<<endl;
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
