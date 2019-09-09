#include <bits/stdc++.h>
using namespace std;
std::vector<int>superviser;
int find_depth(int depth,int employe);
int main(){

        int n;
        scanf("%d",&n);
        superviser.push_back(-1);
        //inputing the superviser of each employe
        for(int i=1; i<=n; i++) {
                int temp;
                cin>>temp;
                superviser.push_back(temp);
        }

        //finding depth of the tree
        int maxdepth=1;
        for(int i=1; i<=n; i++) {
                int depth=1;
                int employe=i;
                //cout<<"calling "<<i<<endl;
                depth=find_depth(depth,employe);
                if(depth>maxdepth)
                        maxdepth=depth;
        }
        cout<<maxdepth<<endl;
}

int find_depth(int depth,int employe){
        //cout<<"dpth= "<<depth;
        //cout<<" employe="<<superviser[employe]<<endl;
        if(superviser[employe]==-1)
                return depth;
        else
                return find_depth(depth+1,superviser[employe]);
}
