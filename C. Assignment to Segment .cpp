
/**
 *    author        : Saurav-Paul 
 *    created       : September 26, 2020 11:56 PM
 *    Problem Name  : C. Assignment to Segment
 *    Problem Url   : https://codeforces.com/edu/course/2/lesson/5/1/practice/contest/279634/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

class Segment_tree{

    public :
    vector<pair<int,int>> tree ;

    Segment_tree(int n){
        int size = 1;
        while(size < n) size *= 2;
        tree.assign(size*2,{0,0}) ;
    }

    pair<int,int> query(int node, int index , int st , int sp){
        if(st > index || sp < index) return make_pair(0,0) ;
        else if(st == sp){
            return tree[node] ; 
        }
        else{
            int lt = (node << 1) ;
            int rt = lt + 1;
            int mid = st + ((sp-st)>>1) ;

            pair<int,int> q1 = query(lt,index,st,mid) ;
            pair<int,int> q2 = query(rt,index,mid+1,sp) ;

            return operation(operation(q1,q2),tree[node]) ;

        }
    }

    pair<int,int> operation(pair<int,int> a , pair<int,int> b){
        if(a.second > b.second) return a ;
        return b ;
    }

    int query(int index,int st , int sp){
        pair<int,int> p = query(1,index,st,sp) ;
        return p.first ;
    }

    void update(int node, int l, int r, int st, int sp , int val,int t){
        if(st > r || sp < l) return ;
        else if(st >= l && sp <= r){
            tree[node] = {val,t} ;
        }
        else{
            int lt = (node << 1) ;
            int rt = lt + 1;
            int mid = st + ((sp-st)>>1) ;


            update(lt,l,r,st,mid,val,t) ;
            update(rt,l,r,mid+1,sp,val,t) ;
        }
    }

};

class TC{

    public :
    void solve(){
        int n , m ;
        cin >> n >> m ;

        Segment_tree tree(n) ;
        for(int i = 1 ; i <= m ; i++){
            int op ; cin >> op ;
            if(op == 1){
                int l , r, val ;
                cin >> l >> r >> val ;
                --r ;
                tree.update(1,l,r,0,n-1,val,i) ;
            }
            else{
                int index ;
                cin >> index ;
                cout << tree.query(index,0,n-1) << "\n" ;
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
