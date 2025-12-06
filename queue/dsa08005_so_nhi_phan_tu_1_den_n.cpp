#include <bits/stdc++.h>

using namespace std;

#define el '\n'

vector<string> res;

void begin(void) {
	queue<string> q;
	q.push("1");
	while (true) {
		string x = q.front(); q.pop();
		if (res.size() == 10000) break;
		res.push_back(x);
		q.push(x + "0");
		q.push(x + "1");
	}
}

signed main(void) {
	cin.tie(0) -> sync_with_stdio(0);
	begin();
	int tc= 1;
	cin >> tc;
	while (tc--) {
		int n; cin >> n;
		for (int i = 0; i < n; i++)
		{
			cout << res[i] << " ";
		}
		cout << el;
	}
}
