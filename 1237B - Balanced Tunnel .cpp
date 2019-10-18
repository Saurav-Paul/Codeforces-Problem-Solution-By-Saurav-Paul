
				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;
using pii = pair<int,int > ;

int main()
{
    int number_of_car;
    scanf("%d",&number_of_car);

    vector< pii > details(number_of_car) ;
    for(int i = 0 ; i < number_of_car ; i++){
        int x ; scanf("%d",&x) ;
        details[x-1].first = i + 1;
    }
    for(int i = 0 ; i < number_of_car ; i++ ){
        int x ; scanf("%d",&x) ;
        details[x-1].second = i + 1 ;
    }
    sort(details.begin() , details.end() ) ;

    int cnt = 0 , mx = 0 ;

    for(auto x : details){
        if(x.second < mx) cnt ++;

        mx = max(mx, x.second ) ;
    }
    printf("%d\n",cnt) ;

    return 0;
}
