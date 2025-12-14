#include <bits/stdc++.h>

using namespace std;
#define el '\n'

int n, a[105];
bool ok;

void nextPermutation() {
	int i = n - 1;
	while (i >= 1 && a[i] > a[i + 1]) {
		i--;
	}
	if (i == 0) ok = false;
	else {
		int j = n;
		while (a[j] < a[i]) j--;
		swap(a[i], a[j]);
		reverse(a + i + 1, a + n + 1);
	}
}

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a[i] = i;
	}
	ok = true;
	while (ok) {
		for (int i = 1; i <= n; i++) {
			cout << a[i];
		}
		cout << el;
		nextPermutation();
	}
}
