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
bool file=0;
using namespace std;
void FAST_IO();
ll ara[501];
int main()
{
   // _time_
   FAST_IO();
   vector<int>v;
   ll n;
   cin>>n;
   int cnt=0, before=0;;
   for(int i=0;i<n;i++){
    int temp;
    cin>>temp;

    if(temp<=before){
        v.pb(cnt);
        cnt=0;
    }
    cnt++;
    before=temp;

   }
   v.pb(cnt);
   cout<<v.size()<<endl;
   for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

   }
   cout<<endl;
    //_show_
    return 0;
   }

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(0);

    //cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(2);
    if(file){
#ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    }
}
