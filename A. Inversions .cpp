
/**
 *    author        : Saurav-Paul 
 *    created       : September 23, 2020 2:21 PM
 *    Problem Name  : A. Inversions
 *    Problem Url   : https://codeforces.com/edu/course/2/lesson/4/3/practice/contest/274545/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class Segment_tree{

    public:
    vector<int> tree;

    Segment_tree(int n){
        tree.resize(n*4) ;
    }

    int query(int node, int l ,int r , int st ,int sp){
        if(sp < l || st > r) return 0 ;
        if(st >= l && sp <= r) return tree[node] ;
        else{
            int lft = (node << 1) ;
            int rght = lft + 1;
            int mid = st + ((sp-st)>>1) ;

            int q1 = query(lft,l,r,st,mid) ;
            int q2 = query(rght,l,r,mid+1,sp) ;

            return operation(q1,q2) ;
        }
    }

    void update(int node, int index, int st , int sp , int value){
        if(st > index || sp < index) return ;
        if(st == sp){
            tree[node] = value ;
        }
        else{
            int lft = (node << 1) ;
            int rght = lft + 1;
            int mid = st + ((sp-st)>>1) ;

            update(lft,index,st,mid,value);
            update(rght,index,mid+1,sp,value);

            tree[node] = operation(tree[lft],tree[rght]) ;
        }
    }

    int operation(int l , int r){
        return l + r ;
    }


};

class TC{

    public :
    void solve(){

        int N ;
        cin >> N ;

        Segment_tree tree(N) ;

        for(int i = 0 ; i < N ; i++){
            int num ; cin >> num ;

            cout << tree.query(1,num+1,N,1,N) << " " ;
            tree.update(1,num,1,N,1) ;
        }
        cout << endl ;

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
