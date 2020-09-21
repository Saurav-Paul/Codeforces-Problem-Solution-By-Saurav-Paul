
/**
 *    author        : Saurav-Paul 
 *    created       : September 21, 2020 5:09 PM
 *    Problem Name  : A. Segment Tree for the Sum
 *    Problem Limit : 1000 ms , 1024 MB 
 *    Problem Url   : https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class Segment_tree{

    public :
    vector<ll> tree ;

    Segment_tree(int n = 1e5+10){
        tree.assign(n*4,0) ;
    }

    void update(int node, int index , int st , int sp, int val){

        if(sp < index || st > index) return ;
        if(st == sp){
            tree[node] = val ;
        }
        else{
            int mid = st + ((sp-st)>>1) ;
            int lft = (node << 1) ;
            int rght = lft + 1;

            update(lft,index,st,mid,val) ;
            update(rght,index,mid+1,sp,val) ;
            tree[node] = tree[lft] + tree[rght] ;
        }

    }

    ll query(int node , int l , int r , int st , int sp){

        if(st > r || sp < l) return 0 ;
        if(st >= l && sp <= r){
            return tree[node] ;
        }
        else{
            int mid = st + ((sp-st)>>1) ;
            int lft = (node << 1) ;
            int rght = lft + 1;

            ll q1 = query(lft,l,r,st,mid) ;
            ll q2 = query(rght,l,r,mid+1,sp) ;

            return q1 + q2 ;
        }
    }

    void build(const vector<int> &v, int node , int st , int sp ){
        if(st == sp){
            tree[node] = v[st] ;
        }
        else{
            int mid = st + ((sp - st) >> 1) ;
            int lft = (node << 1) ;
            int rght = lft + 1;

            build(v,lft,st,mid) ;
            build(v,rght,mid+1,sp) ;
            tree[node] = tree[lft] + tree[rght] ;
        }
    }

};

class TC{

    public :
    void solve(){
        int N , M ;
        cin >> N >> M;

        vector<int> v(N);
        for(auto &x : v) cin >> x ;

        Segment_tree tree(N) ;
        tree.build(v,1,0,N-1) ;

        for(int i = 1 ; i <= M ; i++){
            int op ;
            cin >> op ;

            if(op == 1){
                int index , value ;
                cin >> index >> value ;
                tree.update(1,index,0,N-1,value) ;
            }
            else if(op == 2){

                int l , r ;
                cin >> l >> r ;
                r-- ;
                ll ans = tree.query(1,l,r,0,N-1) ;
                cout << ans << endl ;

            }
            else{
                assert(false) ;
            }

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
