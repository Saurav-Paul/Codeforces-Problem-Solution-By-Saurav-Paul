
/**
 *    author        : Saurav-Paul 
 *    created       : September 23, 2020 10:26 PM
 *    Problem Name  : C. Nested Segments
 *    Problem Url   : https://codeforces.com/edu/course/2/lesson/4/3/practice/contest/274545/problem/C
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

class Segment_tree{

    public:
    vector<int> tree ;

    Segment_tree(int n){
        tree.assign(n*4,0) ;
    }

    int query(int node, int l,int r,int st ,int sp){
        if(st > r || sp < l) return 0 ;
        if(st >= l && sp <= r) return tree[node] ; 
        else{
            int lt = (node << 1) ;
            int rt = lt + 1;
            int mid = st + ((sp-st)>>1) ;

            int q1 = query(lt,l,r,st,mid) ;
            int q2 = query(rt,l,r,mid+1,sp) ;

            return operation(q1,q2) ;

        }
    }

    void update(int node, int index ,int st , int sp , int value){
        if(st > index || sp < index) return ;
        if(st == sp){
            tree[node] = value ;
        }
        else{
            int lt = (node << 1) ;
            int rt = lt + 1;
            int mid = st + ((sp-st)>>1) ;

            update(lt,index,st,mid,value) ;
            update(rt,index,mid+1,sp,value) ;

            tree[node] = operation(tree[lt],tree[rt]) ;
        }
    }

    int operation(int l,int r){
        return l + r ;
    }

};

class TC{

    public :
    void solve(){

        int N ;
        cin >> N ;

        vector<int> pos(N*2+1,0),ans(N+1) ;
        Segment_tree tree(N*2) ;

        for(int i = 1; i <= 2 * N ; i++){
            int num ; cin >> num ;
            if(pos[num] == 0){
                pos[num] = i ;
            }
            else{
                ans[num] = tree.query(1,pos[num],i,1,N*2) ;
                tree.update(1,pos[num],1,N*2,1) ;
            }
        }
        for(int i = 1 ; i <= N ; i++){
            cout << ans[i] << " " ;
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
