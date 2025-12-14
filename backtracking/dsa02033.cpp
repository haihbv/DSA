#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, X[105];

bool used[105];

void ql(int i, int prev) {
	for (int j = 1; j <= n; j++) {
		if (!used[j] && abs(j - prev) != 1) {
			X[i] = j;
			used[j] = true;
			if (i == n) {
				for (int l = 1; l <= n; l++) {
					cout << X[l];
				}
				cout << endl;
			}
			else {
				ql(i + 1, X[i]);
			}
			used[j] = false;
		}
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--) {
		memset(used, false, sizeof(used));
		cin >> n;
		ql(1, -1);	
	}
}

