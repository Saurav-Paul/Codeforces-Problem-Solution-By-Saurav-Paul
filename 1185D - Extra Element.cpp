				/*Saurav Paul*/
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
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

typedef pair<int,int> Pair;

void solve(vector < Pair > &v){
	int n =(int) v.size();
	vector <int > diff;
	for(int i = 1 ; i < n; i++)
		diff.eb(v[i].first - v[i-1].first);
		
	bool isSame = true;
	for(int i = 2 ; i < n-1 ; i++){
		
		if(diff[i] != diff[i-1]){
			isSame = false;
			break ;
		}
	}
	if(isSame){
		printf("%d\n",v[0].second);
		return ;
	}
	isSame = true;
	
	for(int i = 2 ; i < n-1 ; i++)
		if(i==2  && (diff[i] != diff[0] + diff[1])){
			isSame = false;
			break ;
		}
			
		else if((i!=2 && (diff[i] != diff[i-1]))){
			isSame = false;
			break ;
		}
			
	
	if(isSame){
		printf("%d\n",v[1].second);
		return ;
	}
	map < int , int > mymap;
	int different = 0 , cnT = 0;
	for(auto x : diff){
		mymap[x]++;
		if(mymap[x] > cnT){
			cnT = mymap[x];
			different = x;
		}
	}
	int cnt = 0 , index = 0;
	int rem = -1;
	for(int i =1 ; i < n-1 ; i++){
		
		int t = i-1;
			if(rem==t)
				t--;
		if(v[i].first - v[t].first != different){
		
			if(v[i+1].first-v[i-1].first == different){
				cnt ++;
				index = v[i].second ;
				rem = i;
			}
			else{
				cnt = 5;
				break ;
			}
		}
	}
	int temp = n-2;
	if(temp == rem)
		temp --;
	if(v[n-1].first-v[temp].first != different){
				cnt++;
				index = v[n-1].second ;
	}
	
	if(cnt == 1){
		printf("%d\n",index);
	}
	else
		puts("-1");
}

int main()
{
	int n;
	scanf("%d",&n);
	vector < Pair > v;
	for(int i = 0 ; i < n; i++){
		int value;
		scanf("%d",&value);
		v.emplace_back(value,i+1);
	}
	
	sort(all(v));
	
	solve(v);
	
    return 0;
}
