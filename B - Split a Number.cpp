			/* Saurav Paul */
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


string addString (string &a, string &b){
	string ans = "";
	reverse(all(a));
	reverse(all(b));
	bool carry = false;
	int i = 0 , asz= (int)a.size(), bsz=(int)b.size(),sz = min(asz,bsz);
	
	for(i = 0 ; i < sz ; i++){
		int temp  = ctoi(a[i]);
		int temp2 = ctoi(b[i]);
		temp = temp + temp2 + (carry);
		carry = false ;
		if(temp > 9){
			temp = temp%10;
			carry = true;
		}
		ans +=itoc(temp);
	}
	
	while(i < asz){
		int temp = ctoi(a[i]) + (carry);
		carry = false;
		if(temp > 9){
			carry = true ;
			temp = temp % 10;
		}
		ans += itoc(temp);
		i++;
	}
	while(i < bsz){
		int temp = ctoi(b[i]) + (carry);
		carry = false;
		if(temp > 9){
			carry = true ;
			temp = temp % 10;
		}
		ans += itoc(temp);
		i++;
	}
	if(carry)
		ans += "1";
	
	reverse(all(ans));
	
	return ans ;
}
void find_ans(string & ans, string  temp){
	int sz =(int) ans.size();
	int tsz= (int) temp.size();
	bool flag = false;
	if(tsz < sz)
		flag = true ;
	else if(tsz == sz ){
		
		for(int i = 0 ; i < sz ; i++){
			int a = ctoi(ans[i]);
			int b = ctoi(temp[i]);
			if(a < b)
				break ;
			if( a > b){
				flag = true ;
				break ;
			}
		}
	}
	if(flag )
		ans = temp ;
	return ;
}
int main()
{
	boost;
	int n;
	string s;
	cin >> n >> s;
	string ans =  s;
	int k = n/2 ;
	
	
	bool flag= false;
	for(int i = k ; i < n- 1; i++){
		if(s[i+1]=='0')
			continue ;
		string temp1="";
		string temp2="";
		for(int j=0 ; j <= i ; j++)
			temp1 += s[j];
		for(int j = i+1; j < n; j++)
			temp2 += s[j];
			
		string sum =  addString(temp1,temp2);
		
		find_ans(ans,sum);
		if(flag )
			break ;
		flag = true ;
	}

	flag= false;
	for(int i = k ; i >= 0; i--){
		if(s[i+1]=='0')
			continue ;
		string temp1="";
		string temp2="";
		for(int j=0 ; j <= i ; j++)
			temp1 += s[j];
		for(int j = i+1; j < n; j++)
			temp2 += s[j];
			
		string sum =  addString(temp1,temp2);

		find_ans(ans,sum);
		if(flag )
			break ;
		flag = true ;
	}
	
	cout << ans << endl ;

    return 0;
}
