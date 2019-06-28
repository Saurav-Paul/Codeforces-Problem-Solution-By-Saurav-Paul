#include <iostream>
using namespace std;

int main() {
	int n, m, k;
	cin >> n >> m >> k;
	if(n-min(m,k) > 0)
		puts("NO");
	else
		puts("YES");
	return 0;
}
