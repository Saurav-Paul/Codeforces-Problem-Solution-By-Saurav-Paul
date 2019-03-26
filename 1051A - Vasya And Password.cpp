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
    tcase(){
        string s;
        cin>>s;
        vll len;
        bool a, b , c;
        a=b=c=false;
        ll sz=s.size();
        for(auto i : s){
            if(i<='z' && i>='a')
                len.pb(1),a=true;
            else if(i<='Z' && i>='A')
                len.pb(2),b=true;
            else
                len.pb(3),c=true;
        }

        if(a && b && c){
            cout<<s<<endl;
            continue ;
        }
        else if(!a && b && c)
            for(int i=0; i< sz ;  i++){
                if(len[i]==2){
                    if(!b){
                        s[i]='a';
                        break;
                    }
                    else
                        b=false;
                }
                else if(len[i]==3){
                    if(!c){
                        s[i]='a';
                        break;
                    }
                    else
                        c=false;
                }
        }
        else if(a && !b && c)
            for(int i=0; i< sz ;  i++){
                if(len[i]==1){
                    if(!a){
                        s[i]='A';
                        break;
                    }
                    else
                        a=false;
                }
                else if(len[i]==3){
                    if(!c){
                        s[i]='A';
                        break;
                    }
                    else
                        c=false;
                }
        }
            else if(a && b && !c){
            for(int i=0; i< sz ;  i++){
                if(len[i]==2){
                    if(!b){
                        s[i]='1';
                        break;
                    }
                    else
                        b=false;
                }
                else if(len[i]==1){
                    if(!a){
                        s[i]='1';
                        break;
                    }
                    else
                        a=false;
                }
        };
       
    }
        else if(!a && !b &&c){
            for(int i=0; i<sz ; i++){
                if(len[i]==3 &&c)
                    s[i]='a',c=false;
                else if(len[i]==3 &&!c){
                    s[i]='A';
                    break ;
                }
            }
        }
        else if(a && !b && !c){
            for(int i=0; i<sz ; i++){
                if(len[i]==1 &&a)
                    s[i]='1',a=false;
                else if(len[i]==1 &&!a){
                    s[i]='A';
                    break ;
                }
            }
        }
        else if(!a && b && !c){
            for(int i=0; i<sz ; i++){
                if(len[i]==2 &&b)
                    s[i]='1',b=false;
                else if(len[i]==2 &&!b){
                    s[i]='a';
                    break ;
                }
            }
        }
        cout<<s<<endl;

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
