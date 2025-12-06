#include "bits/stdc++.h"

using namespace std;

#define el '\n'

queue<int> q;

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while (tc--) {
		while (!q.empty()) q.pop();
		int n; cin >> n;
		for (int i = 0; i < n; i++) {
			int t; cin >> t;
			if (t == 1) cout << q.size() << el;
			else if (t == 2) {
				if (q.empty()) cout << "YES" << el;
				else cout << "NO" << el;
			} else if (t == 3) {
				int x; cin >> x;
				q.push(x);
			} else if (t == 4) {
				if (!q.empty()) q.pop();
			} else if (t == 5) {
				if (!q.empty()) {
					cout << q.front() << el;
				}
				else cout << "-1" << el;
			} else if (t == 6) {
				if (!q.empty()) {
					cout << q.back() << el;
				}
				else cout << "-1" << el;
			}
		}
	}
	return 0;
}

