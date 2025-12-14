#include "bits/stdc++.h"

using namespace std;

int n, a[105];
bool ok;

void next_binary() {
	int i = n;
	while (i >= 1 && a[i]) {
		i--;
	}
	if (i == 0) {
		ok = false;
	}
	a[i] = 1;
	for (int j = i + 1; j <= n; j++) {
		a[j] = 0;
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a[i] = 0;
	}
	ok = true;
	while (ok) {
		for (int i = 1; i <= n; i++) {
			cout << a[i];
		}
		cout << endl;
		next_binary();
	}
}
