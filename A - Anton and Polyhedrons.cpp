
 #include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int total=0;
while(n--){
        string temp;
cin>>temp;
 if(temp=="Tetrahedron")
    total+=4;
 else if(temp=="Cube")
    total+=6;
 else if(temp=="Octahedron")
    total+=8;
 else if(temp=="Dodecahedron")
    total+=12;
 else if(temp=="Icosahedron")
    total+=20;
}
cout<<total<<endl;
return 0;
}
