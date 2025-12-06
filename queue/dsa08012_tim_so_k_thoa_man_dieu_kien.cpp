#include <bits/stdc++.h>

using namespace std;

#define el '\n'

vector<int> res;

void solve() {
	queue<string> q;
	for (int i = 1; i <= 5; i++) {
		q.push(to_string(i));
	}
	while (!q.empty()) {
		int d[256] = {0};
		string u = q.front(); q.pop();
		res.push_back(stoi(u));
		
		for (char c : u) {
			d[c] = 1;
		}
		
		for (char c = '0'; c <= '5'; c++) {
			if (!d[c]) { // khong duyet lai ki tu giong nhau
				q.push(u + c);
			}
		}
	}
}


int main() {
	cin.tie(0) -> sync_with_stdio(0);
	solve();
	int tc = 1;
	cin >> tc;
	while (tc--) {
		int L, R;
		cin >> L >> R;
		int cnt = 0;
		for (int x : res)
		{
			if (x >= L && x <= R) ++cnt;
		}
		cout << cnt << el;
	}
}
