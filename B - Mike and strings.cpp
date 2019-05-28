						/*Saurav Paul*/
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost				  ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1e9+7
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()
#define iscn(num)             scanf("%d",&num);
#define scn(num)              scanf("%lld",&num);
#define scn2(num,num2)        scanf("%lld%lld",&num,&num2);
using namespace std;
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
////////////////////////

template<typename T>T set_bit(T N,T pos){return N=N | (1<<pos);}
template<typename T>T reset_bit(T N,T pos){return N= N & ~(1<<pos);}
template<typename T> bool check_bit(T N,T pos){return (bool)(N & (1<<pos));}
template<typename T>void bin_print(T N){bitset<25>bit(N);cerr<<bit.to_string()<<"\n";}
template<typename T> void max_self(T &a, T b){
	a=max(a,b);
}
template <typename T > void min_self(T &a, T b){
	a=min(a,b);
}
template <typename T > void add_self(T &a, T b){
	a+=b;
}
////////////////////////

template<typename T> void ara_read(T &v,ll n){
	ll temp;
	for(ll i=0; i< n; i++){
		scanf("%lld",&temp);
		v.emplace_back(temp);
	}
}
template<typename T> void ara_print(T &v){
	for(ll x : v)
		printf("%lld ",x);
	puts("");
}
////////////////////////
const int INF = 1e9 + 5;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;;

bool isSame(string s, string t){
	bool flag = false;
	int i=0;
	int sz = s.size();
	while(i<sz){
		if(t[i]==s[0]){
			int cnt = 0;
			int j=0;
			int k = i ;
			//~ debug()  << dbg(t[i]) dbg(s[0])  dbg(i);
			while(cnt < sz ){
				//~ printf("%d %d\n", k,j);
				if(k==sz)
					k=0;
				if(j==sz)
					j=0;
					
				if(t[k]!=s[j])
					break ;
				
				j++;
				k++;
				cnt++;
				
			}
			
			if(cnt==sz){
				flag = true ;
				break ;
			}
			
		}
		
		i++;
	}
	//~ if(!flag){
		//~ cout << s << " " << t<< endl;
	//~ }
	return flag;
}




int find_need(string s , string t ){
	int sz =(int)s.size();
	int cnt =0;
	bool flag= false;
	int i=0;
	while(1){
		if(i==sz)
			i=0;
		if(s[0]==t[i]){
			int k=0;
			int j= i;
			string temp ="";
			while(k!=sz){
				if(j==sz)
					j=0;
				temp += t[j] ;
				j++;
				k++;
			}
			
			if(temp == s){
				cnt = i ;
				flag =true ;
			}
		}
		
		if(flag)
			break ;
		i++;
	}

	return cnt;
}


int main()
{
	boost;
	int n;
	cin>>n;	
	
	string ara[n];
	for(int i=0; i< n; i++){
		cin>> ara[i];
	}
	if(n==1){
		puts("0");
		return 0;
	}
	string temp = ara [0];
	
	bool flag=true;
	
	for(int check=1; check< n ; check++){
		flag = isSame(temp , ara[check]);
		if(!flag)
			break ;
	}
	if(!flag)
		puts("-1");
	else{
		int answer = INF ;
		int len = (int) temp.size();
		vector <int > rem(len);
		for(int m=0; m< n ; m++){
			int cnt = 0;
			for(int x=0; x < n ; x++){
			    if(m==x)
					continue ;
				cnt+=find_need(ara[m],ara[x]);
				
				
			}
			min_self(answer, cnt);
			
		}
	
		//~ ara_print(rem);
		printf("%d\n",answer);	
			
	}
	
    return 0;
}
