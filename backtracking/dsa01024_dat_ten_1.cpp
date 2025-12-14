#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, k, X[105];

set<string> se;
vector<string> v;

void ql(int i) {
	for (int j = X[i - 1] + 1; j <= v.size() - k + i; j++) {
		X[i] = j;
		if (i == k) {
			for (int l = 1; l <= k; l++) {
				cout << v[X[l] - 1] << " ";
			}
			cout << el;
		}
		else ql(i + 1);
	}
}

int main() {
	cin >> n >> k;
	se.clear(); v.clear();
	X[0] = 0;
	for (int i = 1; i <= n; i++) {
		string x;
		cin >> x;
		se.insert(x);
	}
	for (auto x : se) {
		v.push_back(x);
	}
	
	ql(1);
}
