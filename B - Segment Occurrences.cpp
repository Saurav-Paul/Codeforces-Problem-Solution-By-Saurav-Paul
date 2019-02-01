#include<iostream>
using namespace std;
int ara[100000];
void aramarking (int t, string T){
int prfx=0,sufx=1;
ara[0]=0;
while(sufx<t){
if(T[prfx]==T[sufx]){
    ara[sufx]=prfx+1;
    sufx++;
    prfx++;
}
else{
    if(prfx){
      prfx=ara[prfx-1];
    }
    else{
        ara[sufx]=0;
        sufx++;
    }
}


}
}


int kmp(string S, string T,int t){
int cnt=0,i=0,j=0;
while(i<S.length()){
 if(S[i]==T[j]){
    i++;
    j++;
    if(j==t){
        cnt++;
        j=ara[j-1];
    }
 }
 else {

    if(j){
      j=ara[j-1];

    }
    else{
        i++;
    }
 }

}
return cnt;

}
int main(){
string S,T;
int s,t,q;
cin>>s>>t>>q>>S>>T;
int i,j,temp,st,sp;
aramarking (t, T);
while(q--){
    cin>>st>>sp;
    string str=S.substr(st-1,(sp-st)+1);
   int cnt= kmp(str,T,t);
   cout<<cnt<<endl;
}
}
