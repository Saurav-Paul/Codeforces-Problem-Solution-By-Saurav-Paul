#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int  base, n,i,j,p,c,trailing_zeros,k;
    cin>>n>>base;
    trailing_zeros = LLONG_MAX;
    j = base;

    for (i=2; i <= base; i++)
    {
        if (i*i>base) i=base;
            p = 0;
            while (base % i== 0)
            {
                p++;
                base /= i;
            }
            if(!p) continue;
            c = 0;
            k = n;

            while (k)
            {
                c += (k/i);
                k /= i;
            }
            trailing_zeros = min(trailing_zeros, c/p);


    }
    printf("%lld\n",trailing_zeros);

    return 0;
}
