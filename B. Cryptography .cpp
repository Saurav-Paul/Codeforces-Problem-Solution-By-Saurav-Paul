
/**
 *    author        : Saurav-Paul 
 *    created       : September 25, 2020 11:17 AM
 *    Problem Name  : B. Cryptography
 *    Problem Url   : https://codeforces.com/edu/course/2/lesson/4/4/practice/contest/274684/problem/B
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;

using vec = vector<int> ;
int mod ;
const int nax = 2e5 * 4 ;

inline int cal(int a , int b , int c , int d){
    long long ans = a * b + c * d;
    if(ans >= mod){
        int x = int(ans%mod) ;
        return x ;
    }
    return (int) ans ;
}

struct matrix{

    int m[2][2] ;
    void read(){
        for(int i = 0 ; i < 2 ; i++){
            for(int j = 0 ; j < 2 ; j++){
                scanf("%d",&m[i][j]) ;
            }
        }
    }

    void print(){
        for(int i = 0 ; i < 2 ; i++){
            for(int j = 0 ; j < 2 ; j++){
                if(j) printf(" ") ;
                printf("%d",m[i][j]) ;
            }
            puts("") ;
        }
        puts("") ;
    }
};

class Segment_tree{

    public:
    vector<matrix> tree ;

    Segment_tree(int n){
        tree.resize(n*4) ;
    }

    void query(int node, int l, int r, int st, int sp, matrix &mat){
        if(st >= l && sp <= r){
            mat = tree[node] ;
        }
        else{
            int lt = (node << 1) ;
            int rt = lt + 1;
            int mid = st + ((sp-st)>>1) ;

            matrix q1, q2 ;
            bool a , b ;
            a = b = true ;
            if(!(st > r || mid < l))
                query(lt,l,r,st,mid,q1) ;
            else a = false;
            if(!(mid+1 > r || sp < l))
                query(rt,l,r,mid+1,sp,q2) ;
            else  b = false;

            if(!a) mat = q2 ;
            else if(!b) mat = q1 ;
            else {
                mat.m[0][0] = cal(q1.m[0][0],q2.m[0][0],q1.m[0][1],q2.m[1][0]) ;
                mat.m[0][1] = cal(q1.m[0][0],q2.m[0][1],q1.m[0][1],q2.m[1][1]) ;
                mat.m[1][0] = cal(q1.m[1][0],q2.m[0][0],q1.m[1][1],q2.m[1][0]) ;
                mat.m[1][1] = cal(q1.m[1][0],q2.m[0][1],q1.m[1][1],q2.m[1][1]) ;

            }

        }
    }

    void build(int node, int st , int sp){
        if(st == sp){
            tree[node].read() ;
        }
        else{
            int lt = (node << 1) ;
            int rt = lt + 1;
            int mid = st + ((sp-st)>>1) ;

            build(lt,st,mid) ;
            build(rt,mid+1,sp) ;

            tree[node].m[0][0] = cal(tree[lt].m[0][0],tree[rt].m[0][0],tree[lt].m[0][1],tree[rt].m[1][0]) ;
            tree[node].m[0][1] = cal(tree[lt].m[0][0],tree[rt].m[0][1],tree[lt].m[0][1],tree[rt].m[1][1]) ;
            tree[node].m[1][0] = cal(tree[lt].m[1][0],tree[rt].m[0][0],tree[lt].m[1][1],tree[rt].m[1][0]) ;
            tree[node].m[1][1] = cal(tree[lt].m[1][0],tree[rt].m[0][1],tree[lt].m[1][1],tree[rt].m[1][1]) ;
        }
    }

};


int main(){
    int n , m ;
    scanf("%d%d%d",&mod,&n,&m) ;

    matrix mat ;
    Segment_tree tree(n) ;
    tree.build(1,1,n) ;

    for(int i = 0 ; i < m ; i++){
        int l , r ;
        scanf("%d%d",&l,&r) ;

        tree.query(1,l,r,1,n,mat) ;
        mat.print() ;

    }

    return 0 ;
}


