
/**
 *    author        : Saurav-Paul 
 *    created       : September 26, 2020 6:57 PM
 *    Problem Name  : B. Applying MAX to Segment
 *    Problem Url   : https://codeforces.com/edu/course/2/lesson/5/1/practice/contest/279634/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class Segment_tree{
    
    public:
    vector<int> tree ;

    Segment_tree(int n){
        int size = 1;
        while(size < n) size *= 2;
        tree.assign(size*2,0) ;
    }

    int query(int node, int index, int st , int sp){
        if(st > index || sp < index) return 0 ;
        if(st == sp) return tree[node] ;
        else {
            int lt = (node << 1) ;
            int rt = lt + 1;
            int mid = st + ((sp-st)>>1) ;

            int q1 = query(lt,index,st,mid) ;
            int q2 = query(rt,index,mid+1,sp) ;

            return max({q1,q2,tree[node]}) ;
        }
    }

    void update(int node,int l , int r , int st , int sp,int val){
        if(st > r || sp < l) return ;
        if(st >= l && sp <= r){
            tree[node] = max(tree[node],val) ;
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
        for(int i = 0 ; i < m; i++){
            int op ;
            cin >> op ;
            if(op == 1){
                int l , r , val ; 
                cin >> l >> r  >> val;
                r -- ;
                Tree.update(1,l,r,0,n-1,val) ;
            }
            else if(op == 2){
                int index ;
                cin >> index ;
                cout << Tree.query(1,index,0,n-1) << "\n" ;
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
