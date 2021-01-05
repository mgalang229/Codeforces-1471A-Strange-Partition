#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n, x;
	cin >> n >> x;
	ll sum1=0, sum2=0;
	//get the sum as a whole and divide it by 'x'
	//get the sum of each quotient which is 'a/x'
	//round up on both sums
	for(int i=0; i<n; ++i) {
		int a;
		cin >> a;
		sum1+=a;
		sum2+=ceil((double)a/x);
	}
	cout << ceil((double)sum1/x) << " " << sum2 << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
