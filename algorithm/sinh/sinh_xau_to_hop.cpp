#include <bits/stdc++.h>

using namespace std;

int n, k, a[105];
bool ok;

void next_combination() {
	int i = k;
	while (i >= 1 && a[i] == n - k + i) {
		i--;
	}
	if (i == 0) {
		ok = false;
	}
	a[i]++;
	for (int j = i + 1; j <= k; j++) {
		a[j] = a[j - 1] + 1;
	}
}

int main() {
	cin >> n >> k;
	for (int i = 1; i <= k; i++) {
		a[i] = i;
	}
	ok = true;
	while (ok) {
		for (int i = 1; i <= k; i++) {
			cout << a[i];
		}
		cout << endl;
		next_combination();
	}
}
