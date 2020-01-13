				/*Saurav Paul*/
#include<bits/stdc++.h>
using namespace std;

template<typename T>T set_bit(T N,T pos){return N=N | (1<<pos);}
template<typename T>T reset_bit(T N,T pos){return N= N & ~(1<<pos);}
template<typename T> bool check_bit(T N,T pos){return (bool)(N & (1<<pos));}
template<typename T>void bin_print(T N){bitset<25>bit(N);cerr<<bit.to_string()<<"\n";}

int fun(vector<int> &v ,int bit){
	if (bit < 0 || (v.size() == 0))
		return 0;
	vector<int> zero, one;
	for(auto x : v){
		if(check_bit(x,bit)) one.emplace_back(x) ;
		else zero.emplace_back(x) ;
	}

	if(one.size() == 0)
		return fun(zero, bit-1);
	if(zero.size() == 0)
		return fun(one, bit - 1);
	return min(fun(one, bit - 1), fun(zero, bit - 1)) + (1 << bit);
}

int main()
{
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
	vector<int> v(n);
	vector<int> common_bit(31, 1);

	for (int i = 0; i < n; i++)
	{
		cin >> v[i];
		int x = v[i];
		// finding all the common bits , 
		// because they can be reset
		for (int i = 0; i < 31; i++){
			common_bit[i] &= (x & 1);
			x >>= 1;
		}
	}
	// cadidate bit && removing common bits

	for (int i = 0; i < 31; i++)
	{
		if(common_bit[i]){

			for (auto &x : v)
			{
				x = reset_bit(x, i);
			}
		}

	}

	cout << fun(v, 30) << endl;

	return 0;
}
