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
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);

using namespace std;
void FAST_IO();
int ara[101];
int main()
{
      _time_
    //FAST_IO();
   
    int maxIndex,n,minIndex,boro=0,chuto=INT_MAX;
    cin>>n;
    loop(1,n){
        int temp;
        cin>>temp;
        if(temp>boro)
                {
                 boro=temp;
                 maxIndex=i;   
                 
                }
                if(temp<=chuto){
                    chuto=temp;
                    minIndex=i;
                    
                }
    }
        int temp=maxIndex-1+n-minIndex;
        if(maxIndex>minIndex)
                temp--;
            cout<<temp<<endl;

   //_show_
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(0);
    //cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
#ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
