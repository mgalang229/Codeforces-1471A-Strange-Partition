#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, x;
		cin >> n >> x;
		vector<int> arr(n);
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}
		long long maximal = 0;
		long long minimal = 0;
		for (int i = 0; i < n; i++) {
			long long a = arr[i];
			long long b = x;
			// get the summation of the quotients of the current element and 'x'
			maximal += ((a + b - 1) / b);
			// add all the elements in 'minimal'
			minimal += arr[i];
		}
		// basically, to achieve the maximal beauty, you don't need to apply
		// any operations at all, simply get the summation of the quotients of 
		// 'arr[i]' and 'x', meanwhile, to get the minimal beauty you need to 
		// take the sum of all the elements first before dividing it by 'x'
		cout << (minimal + x - 1) / x << " " << maximal << '\n';
	}
	return 0;
}
