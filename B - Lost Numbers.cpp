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
#define scn(num)              scanf("%lld",&num);
#define dbg(x)                cout <<"( "<<#x << " = " << x << " )"<<endl
using namespace std;
const ll INF = 2e18 + 99;
typedef pair<ll,ll> Pair;
typedef vector<ll> vec;;
void FAST_IO();
void ara_read(vec &v,ll n);
////////////////////////

int main()
{
	ll ara[]={4,8,15,16,23,42};
	printf("? 1 1\n");
	fflush(stdout);
	ll one;
	scn(one);
	
	one=(ll)sqrt(one);
	for(int i=0; i< 6 ; i++){
		if(ara[i]==one){
			ara[i]=-1;
			break ;
		}
	}
	
	printf("? 2 2\n");
	fflush(stdout);
	ll two;
	scn(two);
	
	two=(ll)sqrt(two);
	
	for(int i=0; i< 6 ; i++){
		if(ara[i]==two){
			ara[i]=-1;
			break ;
		}
	}
	
	printf("? 3 5\n");
	fflush(stdout);
	ll threefive,three, five;
	scn(threefive);
	
	for(int i=0; i<6 ; i++){
		bool check=true;
		if(ara[i]==-1)
			continue ;
		for(int j=0; j< 6 ;j++){
			if(i==j || ara[j]==-1)
				continue ;
				
			if(ara[i]*ara[j]==threefive){
				three=ara[i];
				five=ara[j];
				ara[i]=-1;
				ara[j]=-1;
				check=false ;
			}
		}
		if(!check)
			break;
	}
	
	ll four=-1,six;
	for(int i=0; i<6; i++){
		if(ara[i]!=-1 && four==-1){
			four=ara[i];
			ara[i]=-1;
		}
		else if(ara[i]!=-1){
			six=ara[i];
			ara[i]=-1;
			break ;
		}
	}
	ll threefour;
	printf("? 3 4\n");
	fflush(stdout);
	scn(threefour);
	if(five*four==threefour){
		swap(five,three);
	}else if(three*six==threefour){
		swap(four,six);
	}else if(five*six==threefour){
		swap(five,three);
		swap(four,six);
	}
	
	printf("! %lld %lld %lld %lld %lld %lld\n",one,two,three,four,five,six);
	fflush(stdout);
	
   return 0;
}

void FAST_IO()
{
    // ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);

}
void ara_read(vec &v,ll n){
	ll temp;
	for(ll i=0; i<n; i++){
		scanf("%lld",&temp);
		v.emplace_back(temp);
	}
	
}
