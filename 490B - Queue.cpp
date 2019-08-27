#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>
 
int main(){
    int n;
    scanf("%d",&n);
 
    const int nax = 1e6 + 10;
    vector<pii> v(n);
    vector< vector<int> > graph(nax,vector<int>());
    bool indegree[nax]={};
    set <int> myset;
    for(int i = 0 ; i < n ; i++){
        int a, b;
        scanf("%d%d",&a,&b);
        v[i] = {a,b};
        indegree[b] = true;
        graph[a].push_back(b);
        myset.insert(a);
        myset.insert(b);
    }
 
    vector<int> ans(n);

    for(int i = 0 ; i < n; i++){
        if(v[i].first != 0) continue ;
 
        int pos = 1;
        int temp = v[i].second;
        ans[pos] = temp;
 
        if(pos+2 >= n)
                break ;
        while(graph[temp].size()){
            pos += 2;
            if(graph[temp][0]==0)
                    break ;
            ans[pos] = graph[temp][0];
            graph[temp].pop_back();
            temp = ans[pos];
 
            if(pos+2 >= n)
                break ;
        }
 
        break ;
    }
 
    for(auto x : myset){
        if(indegree[x]==false){
            int pos = 0;
            int temp = x;
            ans[pos] = temp;
            while(graph[temp].size()){
                pos +=2 ;
                if(pos >=n)
                    break ;
                if(graph[temp][0]==0)
                    break ;
                ans[pos] = graph[temp][0];
                graph[temp].pop_back();
                temp = ans[pos];
            }
 
            break ;
        }
    }
 
 
    for(auto x : ans)
        printf("%d ",x);
 
    return 0;
}
 
/**
 
5
1 5
7 11
5 3
11 0
0 7
 
**/
