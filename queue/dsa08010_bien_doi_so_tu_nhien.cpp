#include "bits/stdc++.h"

#define el '\n'

using namespace std;

int bfs(int n) {
	queue<pair<int, int>> q;
	set<int> se;
	se.insert(n);
	q.push({n, 0});
	se.clear();
	
	while (!q.empty()) {
		auto it = q.front(); q.pop();
		int top = it.first, len = it.second;
		if (top == 1) return len;
		
		// -1
		if (top - 1 >= 1 && !se.count(top - 1)) {
			q.push({top - 1, len + 1});
			se.insert(top - 1);
		}
		
		// max(i, n/i);
		for (int i = 2; i * i <= top; i++) {
			if (top%i == 0 && !se.count(top/i))
			{
				se.insert(top/i);
				q.push({top/i, len + 1});
			}
		}
	}
	return -1;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--) {
		int n; cin >> n;
		cout << bfs(n) << el;
	}
}
