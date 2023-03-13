
#include <bits/stdc++.h>
using namespace std;
//efficient approach
int main()
{
	
	int a, b, i, j;
	cin >> a; 
	cin >> b;
	if (a <= 2) {
		a = 2;
		if (b >= 2) {
			cout << a << " ";
			a++;
		}
	}
	if (a % 2 == 0)
		a++;
	for (i = a; i <= b; i = i + 2) {
		bool flag = 1;
		for (j = 2; j * j <= i; ++j) {
			if (i % j == 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1){
		if(i==1)
			continue;
		else
			cout << i << " ";
		}
	}

	return 0;
}
