#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
using namespace std;
bool file=0,rt=1;
clock_t tStart ;
void FAST_IO();
////////////////////////

int main()
{

    FAST_IO();
    ////////////////////////
    ll sth, stm , sph, spm ;
    char c;
    cin>> sth >> c>>stm >> sph>> c>> spm ;
    ll ttime= (sph - sth) * 60 + (spm - stm);
    ttime/=2 ;
    ll ah= ttime/60 + sth ;
    ll am = ttime%60 + stm ;
   
    if(am>=60){
        ah++;
        am=am-60;
    }
    cout<<setfill('0')<<setw(2)<<ah<<":"<<setw(2)<<am<<endl;

    ////////////////////////
    if(rt && file){
     printf("\nTime taken: %.6fs", (double)(clock() - tStart)/CLOCKS_PER_SEC);
    }
    return 0;
   }

void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    //cin.tie(NULL);
    //cout.tie(NULL);
    //cout.setf(ios::fixed);
    //cout.precision(2);
    if(rt && file){ tStart = clock(); }
    if(file){
    #ifndef _offline
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    }
}
