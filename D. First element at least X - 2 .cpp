
/**
 *    author        : Saurav-Paul 
 *    created       : September 22, 2020 8:44 PM
 *    Problem Name  : D. First element at least X - 2
 *    Problem Url   : https://codeforces.com/edu/course/2/lesson/4/2/practice/contest/273278/problem/d
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 90 ;

class Segment_tree{

    public : 
    vector<int> tree ;

    Segment_tree(int n){
        tree.assign(n*4,0) ;
    }

    int query(int node, int at_least , int min_index , int st , int sp){

        if(st == sp){
            if(st < min_index || tree[node] < at_least) return INF ;
            return st ;
        }
        else{
            int lft = (node << 1) ;
            int rght = lft + 1;
            int mid = st +((sp-st)>>1) ;

            int q1 = INF , q2 = INF ;

            if(tree[lft] >= at_least && mid >= min_index) {
                q1 =  query(lft,at_least,min_index,st,mid) ;
                if (q1 == INF){
                    q2 = query(rght,at_least,min_index,mid+1,sp) ;
                }
            }
            else{
                q2 =  query(rght,at_least,min_index,mid+1,sp) ;
            }
            return min(q1,q2) ;
        }
    }

    void update(int node, int index , int st , int sp ,int value){
        if(sp < index || st > index) return ;
        if(st == sp){
            tree[node] = value ;
        }
        else{
            int lft = (node << 1) ;
            int rght = lft + 1;
            int mid = st +((sp-st)>>1) ;

            update(lft,index,st,mid,value);
            update(rght,index,mid+1,sp,value);

            tree[node] = operation(tree[lft],tree[rght]) ;
        }
    }

    void build(const vector<int> &v , int node, int st , int sp){
        if(st == sp){
            tree[node] = v[st] ;
        }
        else{
            int lft = (node << 1) ;
            int rght = lft + 1;
            int mid = st +((sp-st)>>1) ;

            build(v,lft,st,mid) ;
            build(v,rght,mid+1,sp) ;

            tree[node] = operation(tree[lft],tree[rght]) ;
        }
    }

    int operation(int l , int r){
        return max(l,r) ;
    }

}; 


class TC{

    public :
    void solve(){
        int N , M ;
        cin >> N >> M ;
        
        vector<int> v(N) ;
        for(auto &x : v) cin >> x;

        Segment_tree tree(N) ;
        tree.build(v,1,0,N-1) ;

        for(int i = 0 ; i < M ; i++){
            int op ;
            cin >> op ;
            if(op == 1){
                int index , value ;
                cin >> index >> value ;
                tree.update(1,index,0,N-1,value) ;
            }
            else if(op == 2){
                int at_least , min_index ;
                cin >> at_least >> min_index ;
                int ans = tree.query(1,at_least,min_index, 0 , N-1) ;
                cout <<(ans == INF ? -1 : ans)<< endl ;
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
