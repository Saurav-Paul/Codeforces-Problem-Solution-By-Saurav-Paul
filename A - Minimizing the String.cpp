 #include<iostream>
using namespace std;
int main(){
string s;
int faltu;
cin>>faltu;
cin>>s;
int check=1;
for(int i=0; i<s.size();i++){
        if(i==s.size()-1 && check){
            continue;
        }
        if(i==s.size()-1 && !check){
                cout<<s[i];
            continue;
        }
        if(check)
    if(s[i]>s[i+1]){
        check=0;
        continue;
    }

    cout<<s[i];

}
return 0;
}
