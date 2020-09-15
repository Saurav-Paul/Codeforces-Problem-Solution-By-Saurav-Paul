#include<bits/stdc++.h>
using namespace std;

using ll = long long int ;

class TC{

    public :
    void solve(){
        int N ;
        cin >> N;

        vector<int> v , neg , pos ;

        ll mx = -1e18 ;

        for(int i = 0 ; i < N ; i++){
            int x;
            cin >> x;

            if(x == 0) mx = 0 ;

            v.push_back(x) ;
            if(x <= 0) neg.push_back(x) ;
            else pos.push_back(x) ;
        }



        sort(neg.begin() , neg.end()) ;
        sort(pos.begin() , pos.end()) ;

        int sp = pos.size() , sn = neg.size() ;
        if(sp == 0){
            ll temp = 1 ;
            for(int i = sn - 1,cnt = 5; cnt ; cnt -- ,i--){
                temp *= neg[i] ;
            }

            cout << temp << endl ;
            return ;
        }
        if(sn == 0){
            ll temp = 1 ;
            for(int i = sp - 1,cnt = 5; cnt ; cnt -- ,i--){
                temp *= pos[i] ;
            }

            cout << temp << endl ;
            return ;
        }

        reverse(pos.begin() , pos.end() );

        if(sp >= 5){
            ll temp = 1;
            for(int i = 0 ; i < 5; i++){
                temp *= pos[i] ;
            }
            mx = max(temp,mx) ;
        }

        ll temp = 1;

        for(int i = 0 ; i < min(sn,5) ; i++){
            int cnt = i + 1;
            temp *= neg[i] ;
            if(cnt == 5){
                mx = max(temp, mx) ;
                break ;
            }
            ll temp2 = temp ;

            for(int j = 0 ;  j < min(sp,5) ; j++){
                cnt ++ ;

                temp2 *= pos[j] ;

                if(cnt == 5){
                    mx = max(mx, temp2) ;
                    break ;
                }

            }
        }

        cout << mx << endl ;


    }
};

int main(){
    ios_base::sync_with_stdio(false);

    int testcases = 1;
    cin >> testcases ;
    for(int i = 1 ; i <= testcases ; i ++){
        TC tc;
        tc.solve() ;
    }

    return 0 ;
}
