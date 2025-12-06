#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define ll long long

vector<ll> res;

void ktao() {
	queue<ll> q;
	q.push(1);
	while (true) {
		ll x = q.front(); q.pop();
		
		if (x > 9e18) break;
		res.push_back(x);
		q.push(x * 10);
		q.push(x * 10 + 1);
	}
}


int main() {
	cin.tie(0) -> sync_with_stdio(0);
	ktao();
	int tc = 1; cin >> tc;
	while (tc--) {
		ll n; cin >> n;
		int d = 0;
		while (d < res.size() && res[d] < n)
		{
			d++;
		}
		cout << d << el;
	}
}
