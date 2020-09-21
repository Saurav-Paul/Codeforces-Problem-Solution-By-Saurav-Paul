
/**
 *    author        : Saurav-Paul 
 *    created       : September 21, 2020 9:20 PM
 *    Problem Name  : C. Number of Minimums on a Segment
 *    Problem Url   : https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class Segment_tree{

    pair<int,int> INF = {1e9+90 , 1} ;
    vector<pair<int,int>> tree ;

    public :
    Segment_tree(int n = 1e5){
        tree.assign(n*4,{0,0}) ;
    }

    pair<int,int> query(int node, int l ,int r , int st ,int sp){
        if(st > r || sp < l) return INF ;
        else if(st >= l && sp <= r){
            return tree[node] ;
        }
        else{
            int mid = st + ((sp-st)>>1) ;
            int lft = (node << 1) ;
            int rght = lft + 1;

            return operation(query(lft,l,r,st,mid) , query(rght,l,r,mid+1,sp)) ;

        }
    }

    void update(int node, int index , int st , int sp , int value){
        if(st > index || sp < index) return ;
        if(st == sp){
            tree[node] = {value,1} ;
        }
        else{
            int mid = st + ((sp-st)>>1) ;
            int lft = (node << 1) ;
            int rght = lft + 1;

            update(lft,index,st,mid,value) ;
            update(rght,index,mid+1,sp,value) ;

            tree[node] = operation(tree[lft],tree[rght]) ;

        }
    }

    void build(vector<int> &v , int node , int st, int sp){
        if(st == sp){
            tree[node] = {v[st],1} ;
        }
        else{
            int mid = st + ((sp-st)>>1) ;
            int lft = (node << 1) ;
            int rght = lft + 1;

            build(v,lft,st,mid) ;
            build(v,rght,mid+1,sp) ;

            tree[node] = operation(tree[lft],tree[rght]) ;
        }
    }

    pair<int,int> operation(pair<int,int> a, pair<int,int> b){
        if(a.first == b.first){
            return make_pair(a.first , a.second + b.second) ;
        }
        else if(a.first < b.first){
            return a ;
        }
        else return b ;
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
                int l , r ;
                cin >> l >> r;
                r -- ;
                pair<int,int> p = tree.query(1,l,r,0,N-1) ;
                cout << p.first << " " << p.second << endl ;
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
