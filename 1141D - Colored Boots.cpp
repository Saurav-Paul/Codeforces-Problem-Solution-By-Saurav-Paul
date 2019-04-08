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
using namespace std;
const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////

int main()
{

    FAST_IO();
    ////////////////////////
    ll n; scn(n);
    string a,b; cin>>a>>b;
    vector<vector<int>> alphabet(27,vector<int>());
    vector<int> question1,question2,notused1(n,1),notused2(n,1);
    vector<Pair> ans;
    for(int i=0; i< n ; i++){
        if(a[i]!='?'){
            alphabet[a[i]-'a'].pb(i);
        }else{
            question1.pb(i);
        }
    }
    for(int i=0;i<n; i++){
        if(b[i]!='?'){
            ll sz=alphabet[b[i]-'a'].size();
            if(sz){
                ll temp=alphabet[b[i]-'a'][sz-1];
                alphabet[b[i]-'a'].pop_back();
                notused1[temp]=0;
                notused2[i]=0;
                ans.pb(make_pair(temp,i));
            }

        }else{
            question2.pb(i);
        }
    }
    for(ll i=0,q1sz=question1.size(); i< n && q1sz ; i++){
        if(b[i]!='?' && notused2[i]){
            q1sz--;
            ans.pb(make_pair(question1[q1sz],i));
            notused2[i]=0;
            notused1[question1[q1sz]]=0;
            question1.pop_back();
        }
    }
    for(ll i=0, q2sz=question2.size(); i<n && q2sz ; i++){
        if(a[i]!='?' && notused1[i]){
            q2sz--;
            ans.pb(make_pair(i,question2[q2sz]));
            notused1[i]=0;
            notused2[question2[q2sz]]=0;
            question2.pop_back();
        }
    }
    for(int i=0,sz=min(question1.size(),question2.size()); i<sz ; i++){
        ans.pb(make_pair(question1[i],question2[i]));
    }
    printf("%lld\n",(ll)ans.size() );
    for(auto i : ans){
        printf("%lld %lld\n",i.first+1, i.second+1 );
    }
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
