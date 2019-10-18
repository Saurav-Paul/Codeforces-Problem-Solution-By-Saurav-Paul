				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a , b , c;
    scanf("%d%d%d",&a,&b,&c) ;
    int cnt = 0;

    int x = c / 2 ;
    x = min(x, b) ;

    cnt = 3 * x ;
    b -= x;

    x = b / 2;
    x = min(a , x) ;
    cnt += 3 * x ;
    printf("%d\n",cnt) ;
}

int main()
{
    int t; scanf("%d",&t);
    while(t--)
        solve () ;

    return 0;
}
