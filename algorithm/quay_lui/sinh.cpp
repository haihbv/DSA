#include <bits/stdc++.h>

using namespace std;

int n, k, X[1005];

void in() {
	for (int i = 1; i <= n; i++) {
		cout << X[i];
	}
	cout << endl;
}

void inkq() {
	for (int i = 1; i <= k; i++) {
		cout << X[i];
	}
	cout << endl;
}

// sinh xau ke tiep
void ql1(int i) {
	for (int j = 0; j <= 1; j++) {
		X[i] = j;
		if (i == n) in();
		else ql1(i + 1);
	}
}

// sinh xau to hop
void ql2(int i) {
	for (int j = X[i - 1] + 1; j <= n - k + i; j++) {
		X[i] = j;
		if (i == k) inkq();
		else ql2(i + 1);
	}
}

// sinh chinh hop
void ql4(int i) {
	for (int j = 1; j <= n; j++) {
		X[i] = j;
		if (i == n) in();
		else ql4(i + 1);
	}
}

// sinh xau hoan vi
bool visited[1005];
void ql3(int i) {
	for (int j = 1; j <= n; j++) {
		if (!visited[j]) {
			X[i] = j;
			visited[j] = true;
			if (i == n) {
				in();
			}
			ql3(i + 1);
			visited[j] = false;
		}
	}
}

int main() {
	cin >> n >> k;
	X[0] = 0;
	memset(visited, false, sizeof(visited));
	for (int i = 1; i <= k; i++) {
		X[i] = i;
	}
	ql2(1);
}
