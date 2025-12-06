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
	for (int i = res.size() - 1; i >= 0; i--) 
	{
		if (res[i].length() <= n) {
			cout << res[i] << " ";
		}
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
