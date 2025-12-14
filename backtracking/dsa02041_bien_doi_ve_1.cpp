#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int solve(int n) {
	queue<pair<int, int>> q;
	set<int> se;
	q.push({n, 0});
	se.insert(n);
	while (!q.empty()) {
		auto top = q.front(); q.pop();
		int x = top.first, len = top.second;
		
		if (x == 1) return len;
		
		if (x - 1 > 0 && !se.count(x - 1)) {
			q.push({x - 1, len + 1});
			se.insert(x - 1);
		}
		
		if (x % 2 == 0 && !se.count(x / 2)) {
			q.push({x / 2, len + 1});
			se.insert(x / 2);
		}
		
		if (x % 3 == 0 && !se.count(x / 3)) {
			q.push({x / 3, len + 1});
			se.insert(x / 3);
		}
	}
	return -1;
}

int main () {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		cout << solve(n) << el;
	}
}

