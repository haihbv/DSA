#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, x, a[105], X[105];

vector<string> r;

void ql(int i, int bd, int sum) {
	for (int j = bd; j <= n; j++) {
		if (sum + a[j] > x) return;
		X[i] = a[j];
		if (sum + a[j] == x) {
			string tmp = "";
			for (int u = 1; u <= i; u++) {
				tmp += to_string(X[u]);
				if (u != i) tmp += " ";
			} 
			r.push_back(tmp);
		} else if (sum + a[j] < x) {
			ql(i + 1, j, sum + a[j]);
		}
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--){
		cin >> n >> x;
		for (int i = 1; i <= n; i++) cin >> a[i];
		sort(a + 1, a + n + 1);
		r.clear();
		ql(1, 1, 0);
		if (r.empty()) {
			cout << -1;
		}
		else {
			cout << r.size() << " ";
			for (string x : r) {
				cout << "{" << x << "}" << " ";
			}
		}
		cout << el;
	} 
}

