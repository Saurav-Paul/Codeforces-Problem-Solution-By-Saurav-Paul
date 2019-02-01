#include<iostream>
using namespace std;
int main(){
    long long int n;
    int check=1;
    cin>>n;
    while(n--){
    	int temp;
    	cin>>temp;
    	if(temp)
    		check=0;

    }
    if(check)
        cout<<"EASY"<<endl;

    else
    	cout<<"HARD"<<endl;


	return 0;
}
