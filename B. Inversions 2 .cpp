
/**
 *    author        : Saurav-Paul 
 *    created       : September 23, 2020 8:24 PM
 *    Problem Name  : B. Inversions 2
 *    Problem Url   : https://codeforces.com/edu/course/2/lesson/4/3/practice/contest/274545/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

class Segment_tree{

    public:
    vector<int> tree;

    Segment_tree(int n){
        tree.resize(n*4) ;
    }

    int query(int node, int sum , int st ,int sp){

        if(st == sp) return st ;

        int lft = (node << 1) ;
        int rght = lft + 1;
        int mid = st + ((sp-st)>>1) ;

        if(tree[rght] > sum){
            return query(rght,sum,mid+1,sp) ;
        }
        else{
            return query(lft,sum-tree[rght],st,mid) ;
        }

    }

    void build(int node, int st , int sp ){
        if(st == sp){
            tree[node] = 1 ;
        }
        else{
            int lft = (node << 1) ;
            int rght = lft + 1;
            int mid = st + ((sp-st)>>1) ;

            build(lft,st,mid) ;
            build(rght,mid+1,sp) ;

            tree[node] = operation(tree[lft],tree[rght]) ;

        }
    }

    void update(int node, int index, int st , int sp ){
        if(st > index || sp < index) return ;
        if(st == sp){
            tree[node] = 0 ;
        }
        else{
            int lft = (node << 1) ;
            int rght = lft + 1;
            int mid = st + ((sp-st)>>1) ;

            update(lft,index,st,mid);
            update(rght,index,mid+1,sp);

            tree[node] = operation(tree[lft],tree[rght]) ;
        }
    }

    int operation(int l , int r){
        return l + r ;
    }


};

class TC{

    public :
    void solve(){

        int N ;
        cin >> N ;

        vector<int> v(N+1) ;
        for(int i = 1 ; i <= N ; i++) cin >> v[i] ;

        Segment_tree tree(N) ;
        tree.build(1,1,N) ;

        vector<int> ans ;
        for(int i = N ; i > 0 ; i--){
            int id = tree.query(1,v[i],1,N) ;
            tree.update(1,id,1,N) ;
            ans.push_back(id) ;
        }
        reverse(ans.begin(),ans.end()) ;
        for(auto x : ans) cout << x <<" " ;
        cout << endl ;

    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
