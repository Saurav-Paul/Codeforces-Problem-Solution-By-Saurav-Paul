				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve () {
	int n; scanf("%d",&n) ;
	vector<int> v(2*n) ;
	for(auto &x : v) scanf("%d",&x) ;
	int stb = count(v.begin() , v.end() , 1) ;
	int blb = count(v.begin() , v.end() , 2) ;
	int dif = stb - blb ;

	map<int , int > r_diff;
	r_diff[0] = 0 ;
	int curr = 0 ;
	for(int i = n ; i < 2 * n ; i ++){
		if(v[i] == 1) curr ++ ;
		else curr --;
		
		if(r_diff.count(curr) == 0 )
			r_diff[curr] = i-(n-1) ;
	}
	int khete_hobe = 2*n ;

	curr = 0;
	for(int i = n - 1; i >= 0 ; i --){
		if(v[i] == 1){
			curr ++;
		}
		else curr -- ;
		if(r_diff.count(dif-curr) ){
			khete_hobe = min(khete_hobe , r_diff[dif-curr]+(n-i)) ;
		}
		
	}
	if(r_diff.count(dif)){
		khete_hobe = min(khete_hobe, r_diff[dif]) ;
	}
	printf("%d\n",khete_hobe) ;
}

int main()
{
	int t; scanf("%d",&t) ;
	while(t--){
		solve () ;
	}

    return 0;
}
