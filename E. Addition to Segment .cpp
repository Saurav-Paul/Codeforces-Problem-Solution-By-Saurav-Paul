
/**
 *    author        : Saurav-Paul 
 *    created       : September 24, 2020 4:26 PM
 *    Problem Name  : E. Addition to Segment
 *    Problem Url   : https://codeforces.com/edu/course/2/lesson/4/3/practice/contest/274545/problem/E
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

class Segment_tree{
    public:
    vector<long long> tree;

    Segment_tree(int n){
        tree.assign(n*4,0) ;
    }

    long long query(int node ,int l , int r , int st , int sp){
        if(st > r || st < l) return 0 ;
        if(st >= l && sp <= r){
            return tree[node] ;
        }
        else{
             int lt = (node << 1) ;
             int rt = lt + 1;
             int mid = st + ((sp-st)>>1) ;

             return operation(query(lt,l,r,st,mid),query(rt,l,r,mid+1,sp)) ;
        }
    }

    void update(int node,int index ,int st , int sp, int val){
        if(st > index || sp < index) return ;
        if(st == sp){
            tree[node] += val ;
        }
        else{
            int lt = (node << 1) ;
            int rt = lt + 1;
            int mid = st + ((sp-st) >> 1) ;

            update(lt,index,st,mid,val) ;
            update(rt,index,mid+1,sp,val) ;

            tree[node] = operation(tree[lt],tree[rt]) ;
        }
    }

    long long operation(long long l ,long long r){
        return l + r ;
    }

};

class TC{

    public :
    void solve(){
        int N , M ;
        cin >> N >> M ;

        Segment_tree tree(N) ;

        for(int i = 1 ; i <= M ; i++){
            int op ; cin >> op;
            if(op == 1){
                int l , r , val ; 
                cin >> l >> r >> val;
                tree.update(1,l,0,N-1,val) ;
                tree.update(1,r,0,N-1,-val) ;
            }
            else if(op == 2){
                int index ;
                cin >> index ;
                cout << tree.query(1,0,index,0,N-1) << endl ;
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
