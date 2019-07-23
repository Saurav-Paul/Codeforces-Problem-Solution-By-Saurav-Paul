#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	
	int n; scanf("%d",&n);
	vector <int > v(n);
	
    for(auto &x : v)
		scanf("%d",&x);
		
	bool flag = true;
	for(int i = 1 ; i < n- 1; i++)
		if(v[i-1]>= v[i] and v[i] <= v[i+1]){
			flag = false;
			break;
		}
    
    puts(flag?"YES":"NO");
    
    return 0;
    
}
