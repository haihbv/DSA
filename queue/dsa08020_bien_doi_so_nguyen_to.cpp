#include "bits/stdc++.h"

using namespace std;

#define el '\n'

int s, t;
bool prime[10001];
void sang() {
	prime[0] = prime[1] = false;
	for (int i = 2; i <= 10000; i++) prime[i] = true;
	int k = sqrt(10000);
	for (int i = 2; i <= k; i++) {
		for (int j = i * i; j <= 10000; j += i) {
			prime[j] = false;
		}
	}
}

int bfs() {
	queue<pair<int, int>> q;
	set<int> se;
	q.push({s, 0});
	se.insert(s);
	while (!q.empty()) {
		auto it = q.front(); q.pop();
		string u = to_string(it.first);
		int len = it.second;
		if (it.first == t) return len;
		for (int i = 0; i < 4; i++) {
			char st = '0';
			if (i == 0) st = '1';
			string tmp = u;
			for (char c = st; c <= '9'; c++) {
				tmp[i] = c;
				int tmp_num = stoi(tmp);
				if (!se.count(tmp_num) && prime[tmp_num]) {
					q.push({tmp_num, len + 1});
					se.insert(tmp_num);
				}
			}
		}
	}
	return -1;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	sang();
	int tc = 1;
	cin >> tc;
	while (tc--) {
		cin >> s >> t;
		cout << bfs() << el;
	}
}

