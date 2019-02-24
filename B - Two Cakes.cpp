#include<bits/stdc++.h>
#define endl '\n'
#define _time_ clock_t tStart = clock();
#define _show_ printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll long long int
#define loop(a,b)           for(int i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);

using namespace std;
void FAST_IO();
vector<ll>v[1000000];
int main()
{
      _time_
   //FAST_IO();
   ll n;
   cin>>n;
   for(int i=1;i<=2*n;i++){
    ll temp;
    cin>>temp;
    v[temp].pb(i);
   
   }
   int f1=0,f2=0,f3=0,f4=0;
   ll x=1,y=1,ans1=0,ans2=0,ans3=0;
   for(int i=1;i<=n;i++){
        
        f1+=abs(x-v[i][0]);
        f2+=abs(y-v[i][1]);
    
        int temp=abs(x-v[i][0])+abs(y-v[i][1]);
        int temp2=abs(x-v[i][1])+abs(y-v[i][0]);
        if(temp<temp2){
            ans1+=abs(x-v[i][0]);
            ans2+=abs(y-v[i][1]);
            ans3+=temp;
            x=v[i][0];
            y=v[i][1];
        }
        else{
           ans2+=abs(x-v[i][0]);
           ans1+=abs(y-v[i][1]);
           ans3+=temp2;
           y=v[i][0];
           x=v[i][1];
        }
        

   }
   cout<<ans3<<endl;

   // _show_
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(2);
#ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
