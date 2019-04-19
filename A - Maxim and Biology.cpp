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
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////
//"ACTG".
string al="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
ll find_ans(char index,char f){
    ll temp=0,temp2=0;

    for(int i=index-'A';  ; i++){
        if(i==al.size())
            i=0;
        if(al[i]==f){
            break;
        }

        temp++;
    }
    for(int i=index-'A'; ; i--){


        if(i<0){
            i=al.size()-1;
        }
        if(al[i]==f)
            break ;
        temp2++;

    }
    return min(temp,temp2);

}
int main()
{

    FAST_IO();
    ////////////////////////
    ll n; scn(n);
    string s; cin>>s;
    ll rem=INT_MAX,temp=0;
    for(int i=0; i< n ; i++){
        temp=0;
        if(i+3<n){
            // if(s[i]=='Z'){
            //     temp++;
            // }else{
            //     temp+=min(abs('A'-s[i]),abs('Z'-s[i])+1);
            // }
            // temp+=min(abs('C'-s[i+1]),abs('Z'-s[i+1])+('C'-'A')+1);
            // temp+=min(abs('T'-s[i+2]),abs('Z'-s[i+2])+('T'-'A')+1);
            // temp+=min(abs('G'-s[i+3]),abs('Z'-s[i+3])+('G'-'A')+1);
            temp+=find_ans(s[i],'A');
            temp+=find_ans(s[i+1],'C');
            temp+=find_ans(s[i+2],'T');
            temp+=find_ans(s[i+3],'G');
            // cout<<temp<<endl;
            rem=min(rem,temp);
        }
        
    }
    printf("%lld\n",rem );
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
