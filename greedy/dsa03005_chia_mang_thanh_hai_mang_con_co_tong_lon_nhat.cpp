#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		k = min(k, n - k);
		sort(a, a + n);
		int sum1 = 0, sum2 = 0;
		for (int i = 0; i < k; i++) {
			sum1 += a[i];
		}
		for (int j = k; j < n; j++) {
			sum2 += a[j];
		}
		cout << sum2 - sum1 << el;
	}
	
}

