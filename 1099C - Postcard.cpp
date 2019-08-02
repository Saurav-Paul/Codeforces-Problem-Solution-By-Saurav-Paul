#include<bits/stdc++.h>
#define dbg(x)  if(0)cerr<<#x<<" : "<<x<<endl;
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    string s="",t;
    int k;
    cin >> t >> k;

    int sz = (int) t.size();
    bool ok= false;
    for(int i = 0 ; i < sz ; i++){
        if(t[i]!='*' and t[i]!='?')
            ok = true;
        if(ok){
            s +=t[i];
        }
    }

    int candy=0, snowflake=0;
    int n= 0;

    for(auto x : s){
        if(x=='*')
            snowflake++;
        else if(x=='?')
            candy ++;
        else
            n++;
    }

    dbg(candy);
    dbg(snowflake);
    dbg(n);

    if(snowflake==0 && k > n){
        cout<<"Impossible\n";
        return 0;
    }
    if(n-(candy+snowflake) > k){
        cout<<"Impossible\n";
        return 0;
    }

    int needToDelete = 0 , needTOAdd= 0;
    if(k>n){
        needTOAdd = k- n;
    }
    else if(k < n){
        needToDelete = n - k;
    }

    sz =(int) s.size();
    int p[sz];

    for(int i = 0 ; i < sz; i++){
        if(s[i]=='?'){

            if(needToDelete){
                p[i-1] = 0;
                needToDelete--;
            }
            p[i]=0;
        }
        else if(s[i]=='*'){
            if(needToDelete){
                p[i-1] = 0;
                needToDelete--;
            }
            if(needTOAdd){
                p[i-1]+=needTOAdd;
                needTOAdd = 0;
            }
            p[i]=0;
        }
        else
            p[i]=1;

    }

    for(int i = 0; i < sz ; i++){
        while(p[i]){
            cout<<s[i];
            p[i]--;
        }
    }
    cout<<endl;
    return 0;
}
