#include <bits/stdc++.h>
using namespace std;

long long ar[4];
char c1[4] = {'0', '0', '1', '1'};
char c2[4] = {'0', '1', '0', '1'};

int main() {
    long long n,i,j;
    cin >> n;
    string a, b;
    cin >> a >> b;
    for( i = 0; i < n; i++){
        for( j = 0; j < 4; j++){
            if(c1[j] == a[i] && c2[j] == b[i]){
                ar[j]++;
            }
        }
    }
    cout << ar[0] * ar[2] + ar[0] * ar[3] + ar[1] * ar[2] << endl;
    return 0;
}
