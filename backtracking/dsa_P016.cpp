#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n = 8, value_max = 0, a[20][20], X[20];
int cot[20], cheoNguoc[20], cheoXuoi[20];

void nhap() {
	for (int i = 1; i <= 8; i++) {
		for (int j = 1; j <= 8; j++) {
			cin >> a[i][j];
		}
	}
}

void ql(int i, int sum) {
	for (int j = 1; j <= n; j++) {
		if (!cot[j] && !cheoNguoc[i+j-1] && !cheoXuoi[i-j+n]) {
			X[i] = j;
			cot[j] = 1; cheoNguoc[i+j-1] = 1; cheoXuoi[i-j+n]= 1;
			if (i == n) {
				sum += a[i][X[i]];
				value_max = max(value_max, sum);
			}
			else ql(i + 1, sum + a[i][X[i]]);
			cot[j] = 0; cheoNguoc[i+j-1] = 0; cheoXuoi[i-j+n]= 0;
		}
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	for (int t = 1; t <= tc; t++) {
		value_max = 0;
		nhap();
		ql(1, 0);
		cout << "Test " << t << ": " << value_max << el;
	}
}

