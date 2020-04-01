
				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
void solve() {
 
    long long  a,b,c,d,x,y,x1,y1,x2,y2;
	cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
    bool ok = true ;
	if(x-x1<a-b || x2-x<b-a || y-y1<c-d || y2-y<d-c)
		ok = false ;
	else if((x1==x2 && (a || b)) || (y1==y2 && (c || d)))
		ok = false ;
 
    cout << (ok?"Yes":"No") << endl ;
 
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int testcase;
    cin >> testcase;
    for (int t = 1; t <= testcase; t++){
        solve();
    }
    
    return 0;
}
