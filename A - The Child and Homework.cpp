				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()

using ll = long long int ;
using namespace std;
using vec = vector<int> ;

int main()
{
	string s;
	vec v(4);
	
	for(int i= 0 ; i < 4 ; i++){
		cin >> s;
		v[i] = s.size()-2;
	}
	
	bool a = false, b = false;
	int ind = -1;
	string choice = "ABCD";

	int cnt = 0;
	for(int i = 0 ; i < 4 ; i++){
		a = true , b = true;
		for(int j = 0 ; j < 4 ; j++){
			if(i==j)
				continue ;
			if(v[j]*2 > v[i])
				a = false ;
			if(v[j] < v[i] *2)
				b = false;
		}
		if(a ^ b){
			ind = i;
			cnt ++;
		}
	}

	if(cnt == 1)
		printf("%c\n",char(choice[ind]));
	else
		puts("C");
	
    return 0;
}
