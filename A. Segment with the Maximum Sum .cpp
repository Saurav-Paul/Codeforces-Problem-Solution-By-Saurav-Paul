
/**
 *    author        : Saurav-Paul 
 *    created       : September 21, 2020 11:14 PM
 *    Problem Name  : A. Segment with the Maximum Sum
 *    Problem Url   : https://codeforces.com/edu/course/2/lesson/4/2/practice/contest/273278/problem/A
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class Segment_tree{

    struct data{
        ll sum , pref , suff , best ;
        data(int _val){
            sum = _val ;
            pref = suff = best = max(0,_val) ;
        }
    };
    vector<data> tree ;

    public :
    Segment_tree(int n = 1e5){
        tree.assign(n*4,data(0)) ;
    }

    void currbest(){
        cout << tree[1].best << endl ;
    }

    void update(int node, int index , int st, int sp , int value){
        if(st > index || sp < index )  return ;
        if(st == sp){
            tree[node] = data(value) ;
        }
        else{
            int lft = (node << 1) ;
            int rght = lft + 1;
            int mid = st + ((sp-st)>>1) ;

            update(lft,index,st,mid,value) ;
            update(rght,index,mid+1,sp,value) ;
            tree[node] = operation(tree[lft],tree[rght]) ;
        }
    }

    void build(const vector<int> &v , int node , int st , int sp ){
        if(st == sp){
            tree[node] = data(v[st]) ;
        }
        else{
            int lft = (node << 1) ;
            int rght = lft + 1;
            int mid = st + ((sp-st)>>1) ;

            build(v,lft,st,mid) ;
            build(v,rght,mid+1,sp) ;
            tree[node] = operation(tree[lft],tree[rght]) ;
        }
    }

    data operation(data l , data r){
        data new_(0) ;

        new_.sum = l.sum + r.sum ;
        new_.suff = max(r.suff, l.suff + r.sum) ;
        new_.pref = max(l.pref , l.sum + r.pref) ;
        new_.best =  max({l.best,r.best, r.pref + l.suff}) ;

        return new_ ;
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
        tree.currbest() ;

        for(int i = 0 ; i < M ; i++){
            int index , value ;
            cin >> index >> value ;
            tree.update(1,index,0,N-1,value) ;
            tree.currbest() ;
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
