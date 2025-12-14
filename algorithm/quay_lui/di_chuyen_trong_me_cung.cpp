#include "bits/stdc++.h"

#define el '\n'

using namespace std;

int n, a[15][15];
string s;
vector<string> res;

void ql(int i, int j) {
	if (i == n && j == n) {
		res.push_back(s);
		return;
	}
	if (i + 1 <= n && a[i + 1][j] == 1) {
		s += "D";
		a[i + 1][j] = 0;
		ql(i + 1, j);
		s.pop_back();
		a[i + 1][j] = 1;
	}
	
	if (j - 1 >= 1 && a[i][j - 1] == 1) {
		s += "L";
		a[i][j - 1] = 0;
		ql(i, j - 1);
		s.pop_back();
		a[i][j - 1] = 1;
	}
	
	if (j + 1 <= n && a[i][j + 1] == 1) {
		s += "R";
		a[i][j + 1] = 0;
		ql(i, j + 1);
		s.pop_back();
		a[i][j + 1] = 1;
	}
	
	if (i - 1 >= 1 && a[i - 1][j] == 1) {
		s += "U";
		a[i - 1][j] = 0;
		ql(i - 1, j);
		s.pop_back();
		a[i - 1][j] = 1;
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--) {
		cin >> n;
		s.clear();
		res.clear();
		a[0][0] = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= n; j++) {
				cin >> a[i][j];
			}
		}
		
		if (a[1][1] == 1 && a[n][n] == 1) {
			a[1][1] = 0;
			ql(1, 1);
			a[1][1] = 1;
		}
		
		if (res.empty()) cout << -1;
		else {
			sort(res.begin(), res.end());
			for (string x : res) cout << x << " ";
		}
		cout << el;
	}
}

