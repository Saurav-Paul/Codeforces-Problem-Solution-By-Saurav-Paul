
/**
 *    author        : Saurav-Paul 
 *    created       : September 26, 2020 2:10 PM
 *    Problem Name  : A. Addition to Segment
 *    Problem Url   : https://codeforces.com/edu/course/2/lesson/5/1/practice/contest/279634/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class Segment_tree{
    struct data{
        ll prop , val ;
        data(ll _val){
            prop = val = _val ;
        }
        ll sum(){
            return prop + val ;
        }
    };
    public :
    vector<data> tree ;

    Segment_tree(int n){
        int size = 1 ;
        while(size < n){
            size *= 2 ;
        }
        tree.assign(size*2,data(0)) ;
    }

    ll query(int node,int l,int r ,int st , int sp){
        if(st > r || sp < l) return 0 ;
        else if(st >= l && sp <= r){
            return tree[node].sum() ;
        }
        else{
            int lt = (node << 1) ;
            int rt = lt + 1;
            int mid = st + ((sp-st)>>1) ;

            ll q1 = query(lt,l,r,st,mid) ;
            ll q2 = query(rt,l,r,mid+1,sp) ;

            return q1 + q2 + tree[node].prop ;
        }
    }

    void update(int node, int l, int r , int st , int sp, int val){
        if(st > r || sp < l) return ;
        else if(st >= l && sp <= r){
            tree[node].prop += val ;
        }
        else{
            int lt = (node << 1) ;
            int rt = lt + 1;
            int mid = st + ((sp-st)>>1) ;

            update(lt,l,r,st,mid,val) ;
            update(rt,l,r,mid+1,sp,val) ;
        }
    }

};

class TC{

    public :
    void solve(){
        int n , m ;
        cin >> n >> m ;

        Segment_tree Tree(n) ;
        for(int i = 0 ; i < m ; i++){
            int op ;
            cin >> op ;
            if(op == 1){
                int l , r, v ;
                cin >> l >> r >> v;
                r-- ;
                Tree.update(1,l,r,0,n-1,v) ;
            }
            else if(op == 2){
                int index ;
                cin >> index ;
                cout << Tree.query(1,index,index,0,n-1) << "\n" ;
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
