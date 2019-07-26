#include<bits/stdc++.h>
using namespace std;
class obj{
	public :
		int node , cost;
	obj( int a, int b){
		node = a;
		cost = b;
	}
};
class Comp{
	public:
	bool operator ()(obj &a , obj &b){
		return a.cost > b.cost ;
	}
};

int main(){
	
	int n, m;
	scanf("%d%d",&n,&m);
	vector< vector<obj> > graph(n+1);
	
	for(int i = 0 ; i < m ; i++){
		int u , v, cost;
		scanf("%d%d%d",&u,&v,&cost);
		obj temp(v,cost);
		obj temp2(u,cost);
		graph[u].emplace_back(temp);
		graph[v].emplace_back(temp2);
	}
	
	priority_queue<obj , vector<obj> , Comp> pq;	
	vector<long long int> dist(n+1,1e18+90);
	dist[1] = 0;
	bool flag = true;
	vector<int> parent(n+1);
	parent[1] = 1;

	obj temp(1,0);
	pq.push(temp);
	while(!pq.empty()){
		obj x = pq.top();
		pq.pop();
		if(x.node==n)
			flag = false;
		for(auto y : graph[x.node]){
			if(dist[y.node] > dist[x.node] + y.cost){
				parent[y.node] = x.node;
				dist[y.node]  = dist[x.node] + y.cost ;
				pq.push(y);
			}
		}
		
	}
	
	if(flag)
		puts("-1");
	else{

		vector<int> ans ;
		int x = n;
		while(parent[x] != x){
			ans.emplace_back(x);
			x = parent[x];
		}
		ans.emplace_back(1);
		for(x = ans.size()-1 ; x >=0 ; x --)
			printf("%d ",ans[x]);
		puts("");
	}
	
	return 0;
}
