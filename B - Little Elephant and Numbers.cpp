				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define endl '\n'
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define mp                    make_pair
#define clr(x)                x.clear()
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()

using ll = long long int ;
using namespace std;

void find_divisors(vector<int> &v,int n){
	int limt = (int)sqrt(n);
	for(int i = 1 ; i <= limt ; i++){
		if(n%i==0){
			int temp = n/i;
			if(i!= temp)
				v.eb(i);
			v.eb(temp);
		}
	}
	
}
bool check_it(vector<int> v , int n){
	for(auto x : v)
		if(x==n)	return true;
	return false;
}
int main()
{
	int n;
	scanf("%d",&n);
	vector <int > divisors;
	find_divisors(divisors,n);
	vector<int> digits;
	
	int cnt = 0;
	int temp = n;
	
	while(temp)
		digits.eb(temp%10),temp/=10;
	for(int x : divisors){
		temp = x;
		while(temp){
			if(check_it(digits,temp%10)){
				cnt++;
				break ;
			}
			temp /= 10;
		}
	}
	printf("%d\n",cnt);
    return 0;
}
