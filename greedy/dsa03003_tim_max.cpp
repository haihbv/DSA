#include <bits/stdc++.h>

using namespace std;

#define el '\n'

using ll = long long;

ll res;

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int mod = 1e9 + 7;
	int tc;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		vector<int> a(n);
		res = 0;
		for (int &x : a) {
			cin >> x;
		}
		sort(a.begin(), a.end());
		for (int i = 0; i < n; i++) {
			res += 1ll * a[i] * i;
			res %= mod;
		}
		cout << res << el;
	}
}

