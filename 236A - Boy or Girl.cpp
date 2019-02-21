#include<bits/stdc++.h>
#define nl '\n'
#define ll long long int
#define loop(i,a,b)           for(int i=a;i<b;++i)
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
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define mid(s,e)              (s+(e-s)/2)
#define tcase()                ll t; scanf("%lld",&t); while(t--)
#define iscn(num)             scanf("%d",&num);
using namespace std;
void FAST_IO();
bool alphabet[29];
int main()
{
    FAST_IO();
    string name;
    cin>>name;
    int cnt=0;
    for(int i=0;i<name.size();i++)
        alphabet[name[i]-'a']=1;
    for(int i=0;i<29;i++){
        if(!alphabet[i])
            cnt++;
    }
    if(cnt%2)
        cout<<"CHAT WITH HER!"<<nl;
    else
        cout<<"IGNORE HIM!"<<endl;
    return 0;
}
void FAST_IO() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
    #ifndef _offline
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif
}
