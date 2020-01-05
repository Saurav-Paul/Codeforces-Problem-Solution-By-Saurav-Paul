				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

#define ll 					  long long int
#define boost		          ios_base::sync_with_stdio(0);
#pragma GCC optimize("O3")
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define eb                    emplace_back
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define bug()				  debug() <<

///////////////////////

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef PAUL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#ifdef ONLINE_JUDGE
#define cerr if (false) cerr
#endif
int main() ;
void file(){
	#ifdef PAUL
		freopen("in.txt","r",stdin);
		//freopen("out.txt","w",stdout);
	#endif
}
void time(){
	#ifdef PAUL
		cerr << "\nTime elapsed: " << (double)(1.0 * (double)clock() / CLOCKS_PER_SEC) << " s.\n";
	#endif
}
///////////////////////
const int INF = 1e9 + 90;
const ll LINF = 1e18 + 90 ;
using pii = pair<int,int >;
using vec = vector<int> ;

void solve () {
	int n,k,total=0;
    cin>>n>>k;
    vector<string> s;
    map<string,int> cnt;
    int t = 0;

    for(int i=0;i<n;i++)
    {
        string s1;
        cin>>s1;
        cnt[s1]++;
        s.eb(s1);
    }

    for(int i=0;i<n-2;i++)
    {
        cnt[s[i]]=max(0,cnt[s[i]]-1);
        map<string,int> cnt1=cnt;
        for(int j=i+1;j<n-1;j++)
        {
            string f,g="SET";
            cnt1[s[j]]=max(0,cnt1[s[j]]-1);
            for(int x=0;x<k;x++)
            {
                if(s[i][x]==s[j][x])
                    f+=s[i][x];
                else
                {
                    for(auto it: g)
                    {
                        if(it!=s[i][x] && it!=s[j][x])
                        {
                            f+=it;
                            break;
                        }
                    }
                }
            }
            total+=cnt1[f];
        }

    }
    cout<<total<<endl;
	
}

int main()
{
	boost;
	solve () ;

    return 0;
}
