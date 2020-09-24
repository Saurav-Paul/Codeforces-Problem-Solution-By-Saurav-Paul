
/**
 *    author        : Saurav-Paul 
 *    created       : September 24, 2020 9:42 PM
 *    Problem Name  : A. Sign alternation
 *    Problem Url   : https://codeforces.com/edu/course/2/lesson/4/4/practice/contest/274684/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class Segment_tree{

    public :
    vector<pair<ll,ll>> tree ;

    Segment_tree(int n){
        tree.assign(n*4,{0,0}) ;
    }

    pair<ll,ll> query(int node, int l , int r ,int st ,int sp){
        if(st > r || sp < l) return make_pair(0,0) ;
        if(st >= l && sp <= r) return tree[node] ;
        else{
            int lt = (node << 1) ;
            int rt = lt + 1;
            int mid = st + ((sp-st)>>1) ;

            pair<ll,ll> q1 =  query(lt,l,r,st,mid) ;
            pair<ll,ll> q2 = query(rt,l,r,mid+1,sp) ;

            return operation(q1,q2) ;

        }
    }

    void update(int node , int index ,int st ,int sp , int value){
        if(st > index || sp < index) return ;
        if(st == sp){
            if(st&1) tree[node] = {value,0} ;
            else tree[node] = {0, value} ;
        }
        else{
            int lt = (node << 1) ;
            int rt = lt + 1;
            int mid = st + ((sp-st)>>1) ;

            update(lt,index,st,mid,value);
            update(rt,index,mid+1,sp,value);

            tree[node] = operation(tree[lt],tree[rt]) ;
        }
    }

    void build(vector<int> &v , int node, int st, int sp){
        if(st == sp){
            if(st&1) tree[node] = {v[st],0} ;
            else tree[node] = {0, v[st]} ;
        }
        else{
            int lt = (node << 1) ;
            int rt = lt + 1;
            int mid = st + ((sp-st)>>1) ;

            build(v,lt,st,mid) ;
            build(v,rt,mid+1,sp) ;

            tree[node] = operation(tree[lt],tree[rt]) ;
        }
    }

    pair<ll,ll> operation(pair<ll,ll> l , pair<ll,ll> r){
        pair<ll,ll> _new = {l.first + r.first , l.second + r.second } ;
        return _new ;
    }
};

class TC{

    public :
    void solve(){

        int N ; cin >> N ;

        vector<int> v(N+1) ;
        for(int i = 1 ; i <= N ; i++){
            cin >> v[i] ;
        }

        Segment_tree tree(N+1) ;
        tree.build(v,1,1,N) ;

        int M ; cin >> M ;
        for(int i = 0 ; i < M ; i++){
            int op ; cin >> op ;
            if( op == 0 ){
                int index , value ; cin >> index >> value ;
                tree.update(1,index,1,N,value) ;
            }
            else if (op == 1){
                int l , r ; cin >> l >> r;
                pair<ll,ll> p = tree.query(1,l,r,1,N) ;
                if(l&1){
                    cout << p.first - p.second  << endl ;
                }
                else{
                    cout << p.second - p.first << endl ;
                }
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
