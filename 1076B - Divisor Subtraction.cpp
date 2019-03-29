#include<iostream>
#include<cmath>
using namespace std;
bool isprime[50000000];
void sieve(long long n);
int main()
{
    long long n,d,i,cnt=0;
    cin>>n;
    sieve(n);
    while(n!=0)
    {
        if(n%2==0)
            {
                cnt+=n/2;
                break;
            }

        else
        {
            i=3;
            while(i<=sqrt(n))
            {
                if(isprime[i]==false && (n%i)==0)
                {
                    d=i;
                    break;
                }
                i+=2;
            }
            if(i>sqrt(n))
                d=n;

        }
        n-=d;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
void sieve(long long n)
{
    n=sqrt(n);
    for(int i=3;i*i<=n;i++)
    {
        if(!isprime[i])
        {
            for(int j=i*i;j<=n;j+=i)
            {
                isprime[j]=true;
            }
        }
    }
}
