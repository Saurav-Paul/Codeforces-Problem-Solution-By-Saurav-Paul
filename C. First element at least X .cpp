
/**
 *    author        : Saurav-Paul 
 *    created       : September 22, 2020 8:15 PM
 *    Problem Name  : C. First element at least X
 *    Problem Url   : https://codeforces.com/edu/course/2/lesson/4/2/practice/contest/273278/problem/C
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

    int query(int node ,int at_least , int st, int sp){

        if(st == sp) return (tree[node] < at_least?-1 : st) ;

        int lft = (node << 1);
        int rght = lft + 1;
        int mid = st + ((sp-st)>>1) ;

        if(tree[lft] >= at_least){
            return query(lft,at_least,st,mid) ;
        }
        else{
            return query(rght,at_least,mid+1,sp) ;
        }

    }

    void update(int node, int index, int st ,int sp, int value ){
        if(st > index || sp < index) return ;
        if(st == sp){
            tree[node] = value ;
        }
        else{
            int lft = (node << 1);
            int rght = lft + 1;
            int mid = st + ((sp-st)>>1) ;

            update(lft,index,st,mid,value);
            update(rght,index,mid+1,sp,value) ;

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
        return max(a,b);
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
                int index,value ;
                cin >> index >> value ;
                tree.update(1,index,0,N-1,value) ;
            }
            else if(op == 2){
                int at_least ;
                cin >> at_least ;
                cout << tree.query(1,at_least,0,N-1) << "\n" ;
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
