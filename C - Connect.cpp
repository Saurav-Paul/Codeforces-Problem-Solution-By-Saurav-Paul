#include<bits/stdc++.h>
#define endl '\n'
#define _time_ clock_t tStart = clock();
#define _show_ printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
bool file=1,rt=1;
void FAST_IO();

ll n,ix,iy,dx,dy;
string grid[60];
int isvisited[60][60];
vector<pair<int,int>> ivec;
vector<pair<int,int>> dvec;
bool gotit=0,first=1;
int vec=1;
void dfs(int x, int y);
int main()
{
    _time_
    FAST_IO();
    ////////////////////////
    cin>>n;
    cin>>ix>>iy;
    cin>>dx>>dy;
    for(int i=0;i<n;i++)
            cin>>grid[i];

     dfs(ix-1,iy-1);
     vec=2;

    first=0;
    if(gotit){
        cout<<0<<endl;
    }

    if(!gotit){

        dfs(dx-1,dy-1);

        ll min=INT_MAX;
    for(int i=0;i<ivec.size();i++){
        for(int j=0;j<dvec.size();j++){
            ll temp=(ivec[i].first-dvec[j].first)*(ivec[i].first-dvec[j].first);
            temp+=((ivec[i].second-dvec[j].second) *(ivec[i].second-dvec[j].second) );

            if(min>temp)
                min=temp;
        }

    }
    cout<<min<<endl;

    }

    ////////////////////////
    if(file && rt){ _show_ }

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
void dfs(int x, int y){
    
    if(grid[x][y]=='1' || isvisited[x][y])
        return ;

    if(gotit)
            return ;

        isvisited[x][y]=1;
    if((x==dx-1 && y==dy-1) && first){
        gotit=1;
        return ;
    }
    
    if(y<n-1)
    if(grid[x][y+1]=='1')
       {
         if(vec==1)
            ivec.pb(mp(x,y));
            if(vec==2)
            dvec.pb(mp(x,y));   

       }
    if(y>0)
    if(grid[x][y-1]=='1')
    {
         if(vec==1)
            ivec.pb(mp(x,y));
            if(vec==2)
            dvec.pb(mp(x,y));
    }
    if(x<n-1)
    if(grid[x+1][y]=='1')
        {
             if(vec==1)
            ivec.pb(mp(x,y));
            if(vec==2)
            dvec.pb(mp(x,y));
        }
    if(x>0)
    if(grid[x-1][y]=='1')
    {
         if(vec==1)
            ivec.pb(mp(x,y));
            if(vec==2)
            dvec.pb(mp(x,y));
    }


    if(y<n-1)
    if(grid[x][y+1]=='0')
        dfs(x,y+1);
    if(y>0)
    if(grid[x][y-1]=='0')
        dfs(x,y-1);
    if(x<n-1)
    if(grid[x+1][y]=='0')
        dfs(x+1,y);
    if(x>0)
    if(grid[x-1][y]=='0')
        dfs(x-1,y);
    

}
