#include <bits/stdc++.h>

using namespace std;

#define el '\n'

vector<long long> res;
vector<long long> ans(101, -1);

void ktao() {
	queue<long long> q;
	q.push(9);
	while (true) {
		if (res.size() == 10001) break;
		long long x = q.front(); q.pop();
		res.push_back(x);
		q.push(x * 10);
        q.push(x * 10 + 9);
	}
	
	for (int i = 1; i <= 100; i++) {
		for (auto x : res) {
			if (x % i == 0) {
				ans[i] = x;
				break;
			}
		}
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	ktao();
	int tc = 1; cin >> tc;
	while (tc--) {
		int n; cin >> n;
		cout << ans[n] << el;
	}
}
