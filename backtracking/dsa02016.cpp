#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, X[105], cot[105], cheoNguoc[105], cheoXuoi[105];
int cnt = 0;

void ql(int i) {
	for (int j = 1; j <= n; j++) {
		if (!cot[j] && !cheoNguoc[i + j - 1] && !cheoXuoi[i - j + n]) {
			X[i] = j;
			cot[j] = 1; cheoNguoc[i + j - 1] = 1; cheoXuoi[i - j + n] = 1;
			if (i == n) {
				++cnt;
			}
			else {
				ql(i + 1);
			}
			cot[j] = 0; cheoNguoc[i + j - 1] = 0; cheoXuoi[i - j + n] = 0;
		}
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--) {
		memset(cot, 0, sizeof(cot));
		memset(cheoNguoc, 0, sizeof(cheoNguoc));
		memset(cheoXuoi, 0, sizeof(cheoXuoi));
		cnt = 0;
		cin >> n;
		ql(1);
		cout << cnt << el;
	}
}

