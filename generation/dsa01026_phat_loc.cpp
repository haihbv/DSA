#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, a[105];
bool ok;

void ktao() {
	ok = true;
	for (int i = 1; i <= n; i++) {
		a[i] = 6;
	}
}

void sinh() {
	int i = n;
	while (i >= 1 && a[i] == 8) {
		i--;
	}
	if (i < 1) {
		ok = false;
	}
	else {
		a[i] = 8;
		for (int j = i + 1; j <= n; j++) {
			a[j] = 6;
		}
	}
}

void inkq() {
	for (int i = 1; i <= n; i++) {
		cout << a[i];
	}
	cout << endl;
}

bool check() {
	if (a[1] != 8 || a[n] != 6) return false;
	int cnt6 = 0;
	for (int i = 2; i <= n; i++) {
		if (a[i] == 8 && a[i - 1] == 8) return false;
		if (a[i] == 6) {
			cnt6++;
			if (cnt6 > 3) return false;
		}
		else {
			cnt6 = 0;
		} 
	}
	return true;
}

int main() {
	cin >> n;
	ktao();
	while (ok) {
		if(check()) inkq();
		sinh();
	}
}

