
/**
 *    author        : Saurav-Paul 
 *    created       : September 22, 2020 5:10 PM
 *    Problem Name  : B. K-th one
 *    Problem Url   : https://codeforces.com/edu/course/2/lesson/4/2/practice/contest/273278/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

class Segment_tree{

    vector<int> tree ;

    public :
    Segment_tree(int n = 1e5){
        tree.assign(n*4,0) ;
    }

    int query(int node ,int kth, int st, int sp){

        if(st == sp) return st ;

        int lft = (node << 1);
        int rght = lft + 1;
        int mid = st + ((sp-st)>>1) ;

        if(tree[lft] >= kth){
            return query(lft,kth,st,mid) ;
        }
        else{
            return query(rght,kth-tree[lft],mid+1,sp) ;
        }

    }

    void update(int node, int index, int st ,int sp ){
        if(st > index || sp < index) return ;
        if(st == sp){
            tree[node] ^= 1 ;
        }
        else{
            int lft = (node << 1);
            int rght = lft + 1;
            int mid = st + ((sp-st)>>1) ;

            update(lft,index,st,mid);
            update(rght,index,mid+1,sp) ;

            tree[node] = operation(tree[lft],tree[rght]) ;
        }
    }

    void build(vector<int> &v , int node, int st , int sp){
        if(st == sp){
            tree[node] = v[st] ;
        }
        else{
            int lft = (node << 1);
            int rght = lft + 1;
            int mid = st + ((sp-st)>>1) ;

            build(v,lft,st,mid);
            build(v,rght,mid+1,sp) ;

            tree[node] = operation(tree[lft],tree[rght]) ;
        }
    }

    int operation(int a , int b){
        return a + b;
    }


};

class TC{

    public :
    void solve(){
        int N , M ;
        cin >> N >> M ;

        vector<int> v(N) ;
        for(auto &x : v) cin >> x ;

        Segment_tree tree(N) ;
        tree.build(v,1,0,N-1) ;

        for(int i = 0 ; i < M ; i++){
            int op ;
            cin >> op ;
            if(op == 1) {
                int index ;
                cin >> index ;
                tree.update(1,index,0,N-1) ;
            }
            else if(op == 2){
                int kth ;
                cin >> kth ;
                cout << tree.query(1,kth+1,0,N-1) << "\n" ;
            }
            else assert(false) ;
        }

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
