#include<bits/stdc++.h>
#define nl '\n'
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
#define tcase()                ll t,n; scanf("%lld",&t);n=t; while(t--)
#define iscn(num)             scanf("%d",&num);

using namespace std;
void FAST_IO();
int main()
{
    //    _time_
    //FAST_IO();

   int ans=0;
   int temp=0;
   int a,b;
   tcase(){
       //printf("t=%lld n=%lld a=%d b=%d ans=%d\n",t,n,a,b,ans);
       if(t==n-1)
            {
                cin>>a;
                temp++;

            }
            else{
                cin>>b;
                if(b<a)
                    temp=1;
                else
                    temp++;
                a=b;
            }
            ans=max(temp,ans);
   }
    cout<<ans<<endl;

//    _show_
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
#ifndef _offline
   // freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}
