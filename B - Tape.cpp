#include <bits/stdc++.h>
using namespace std;
std::vector<int> broken_segment;
std::vector<int> segment_distance;
int main() {
        long long int n, m, k;
        cin >> n >> m >> k;
        for (int i = 0; i < n; i++) {
                int temp;
                cin >> temp;
                broken_segment.push_back(temp);
                if (i)
                        segment_distance.push_back((temp - broken_segment[i - 1]));

        }

        long long int min_tape=broken_segment[n-1]-broken_segment[0]+1;

        int total=1;
        int i=segment_distance.size()-1;
        sort(segment_distance.begin(),segment_distance.end());

        for(total=1; total<k; total++) {
                min_tape-=(segment_distance[i]-1);
                i--;
        }
        cout<<min_tape<<endl;
}
