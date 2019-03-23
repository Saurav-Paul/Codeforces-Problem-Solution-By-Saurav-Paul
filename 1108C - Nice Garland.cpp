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
ll cnt[7];
int main()
{

    FAST_IO();
    ////////////////////////
    ll n;
    cin>>n;
    string s,rgb="RGB" , rbg="RBG" , brg="BRG" , bgr="BGR" , gbr="GBR" , grb="GRB";
    cin>>s;
    n=s.size();
    for(int i=1,sz=s.size();i<=sz ; i++){
            char ch=s[i-1];
            ll j=0;
            if(i%3==1){
                j=0;
            }
            else if(i%3==2){
                j=1;
            }
            else if(i%3==0){
                j=2;
            }
            
            if(ch!=rgb[j])
                cnt[1]++;
            if(ch!=rbg[j])
                cnt[2]++;
            if(ch!=brg[j])
                cnt[3]++;
            if(ch!=bgr[j])
                cnt[4]++;
            if(ch!=gbr[j])
                cnt[5]++;
            if(ch!=grb[j])
                cnt[6]++;
        
    }
    ll index=0,mini=INT_MAX;
    for(int i=1; i<=6 ; i++){
        // cout<<cnt[i]<<endl;
        if(cnt[i]<mini){
            index=i;
            mini=cnt[i];
        }
    }
    if(index==1)
        s=rgb;
    else if(index==2)
        s=rbg;
    else if(index==3)
        s=brg;
    else if(index==4)
        s=bgr;
    else if(index==5)
        s=gbr;
    else if(index==6)
        s=grb;

    cout<<mini<<endl;
    for(int i=1; i<=n ; i++){
        if(i%3==1)
            cout<<s[0];
        else if(i%3==2)
            cout<<s[1];
        else
            cout<<s[2];
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
