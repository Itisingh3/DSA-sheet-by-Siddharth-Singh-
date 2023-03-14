#include <bits/stdc++.h>
using namespace std;

bool hasArrayTwoCandidates(int A[], int arr_size, int sum)
{
	int l, r;

	sort(A, A + arr_size);

	l = 0;
	r = arr_size - 1;
	while (l < r) {
		if (A[l] + A[r] == sum)
			return 1;
		else if (A[l] + A[r] < sum)
			l++;
		else // A[l] + A[r] > sum
			r--;
	}
	return 0;
}
int main()
{
	int A[] = { 1, 4, 45, 6, 10, -8 };
	int n = 16;
	int arr_size = sizeof(A) / sizeof(A[0]);
	if (hasArrayTwoCandidates(A, arr_size, n))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
