

#include <bits/stdc++.h>
using namespace std;

int Kth_smallest(map<int, int> mp, int K)
{
	int freq = 0;
	for (auto it = mp.begin(); it != mp.end(); it++) {
		freq += (it->second); // adding the frequencies of
							// each element

		if (freq >= K) 
		{
			return it->first;
		}
	}

	return -1; 
}

int main()
{
	int N = 5;
	int K = 2;
	vector<int> arr = { 12, 3, 5, 7, 19 };

	map<int, int> mp;
	for (int i = 0; i < N; i++) {
		mp[arr[i]] += 1; 
	}

	// Function call
	int ans = Kth_smallest(mp, K);
	cout << "The " << K << "th smallest element is " << ans
		<< endl;

	return 0;
}

