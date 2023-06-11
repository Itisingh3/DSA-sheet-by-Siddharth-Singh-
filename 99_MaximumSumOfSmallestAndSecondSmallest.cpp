
#include <bits/stdc++.h>
using namespace std;
int pairWithMaxSum(int arr[], int N)
{
if (N < 2)
	return -1;
int res = arr[0] + arr[1];
for (int i=1; i<N-1; i++)
	res = max(res, arr[i] + arr[i+1]);

return res;
}

int main()
{
	int arr[] = {4, 3, 1, 5, 6};
	int N = sizeof(arr) / sizeof(int);

	cout << pairWithMaxSum(arr, N) << endl;
	return 0;
}
