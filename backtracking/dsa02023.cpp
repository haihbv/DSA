#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, k, X[105];
vector<string> v;

void ql(int i) {
	for (int j = X[i - 1] + 1; j <= v.size() - k + i; j++) {
		X[i] = j;
		if (i == k) {
			for (int u = 1; u <= k; u++) {
				cout << v[X[u] - 1] << " ";
			}
			cout << el;
		}
		else ql(i + 1);
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	cin >> n >> k;
	set<string> se;
	for (int i = 1; i <= n; i++) {
		string x;
		cin >> x;
		se.insert(x);
	}
	
	v.clear();
	for (string x : se) {
		v.push_back(x);
	}
	ql(1);
}

