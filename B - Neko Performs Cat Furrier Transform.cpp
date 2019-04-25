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
////////////////////////
void decToBinary(int n,string &s)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0) {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        s+=(binaryNum[j]+'0');
}

int main()
{
	string s="";
	int n;
	cin>>n;
	decToBinary(n,s);


	vec ans;
	ll sz=s.size();
	bool flag=true;
	ll cnt=0;
	while(flag){

	flag=false;
	cnt++;

	if(cnt&1)
	for(int i=0; i< sz ; i++){

		if(s[i]=='0'){

			//flag=true;
			ans.pb(sz-i);
			for(int j=i; j<sz ; j++)
			{
				if(s[j]=='0'){
					s[j]='1';
				}
				else{
					s[j]='0';
					flag=true;
				}

			}
			if(!flag)
                cnt++;
			break ;
		}


	}
	else{
		for(int i=sz-1; i>=0; i--){

			if(s[i]=='0'){
				s[i]='1';
				break;
			}
			else{
				s[i]='0';
			}

		}
		flag=true;
	}

}
	cout<<cnt-1<<endl;
	for(auto i : ans)
		cout<<i<<" ";
	cout<<endl;
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
