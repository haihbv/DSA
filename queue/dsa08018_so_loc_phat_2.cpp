#include <bits/stdc++.h>

using namespace std;

#define el '\n'

vector<string> res;

void xuly()
{
	queue<string> q;
	q.push("6");
	q.push("8");
	while (!q.empty()) {
		string u = q.front(); q.pop();
		if (u.length() >= 15) break;
		res.push_back(u);
		q.push(u + "6");
		q.push(u + "8");
	}
}

void solve()
{
	int n;
	cin >> n;
	vector<string> ans;
	for (string x : res) {
		if (x.length() <= n) ans.push_back(x);
	}
	cout << ans.size() << el;
	for (string x : ans) {
		cout << x << " ";
	}
	cout << el;
}

int main() 
{
	xuly();
	int tc;
	cin >> tc;
	while (tc--) {
		solve();
	}
}
