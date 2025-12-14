#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define MOD 1000000007
using ll = long long;

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--) {
		int n; cin >> n;
		int a[n], b[n];
		for (int &x : a) cin >> x;
		for (int &x : b) cin >> x;
		sort(a, a + n);
		sort(b, b + n, greater<ll>());
		ll sum = 0;
		for (int i = 0; i < n; i++) {
			sum += 1ll * a[i] * b[i];
		}
		cout << sum << el;
	}
}

