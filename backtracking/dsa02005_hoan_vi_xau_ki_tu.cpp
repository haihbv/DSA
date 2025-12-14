#include <bits/stdc++.h>

using namespace std;

#define el '\n'

string s;

bool used[1005];
char X[1005];

void ql(int i) {
	for (int j = 0; j < s.length(); j++) {
		if (!used[j]) {
			X[i] = s[j];
			used[j] = true;
			if (i == s.length() - 1) {
				for (int l = 0; l <= i; l++) {
					cout << X[l];
				}
				cout << " ";
			}
			else ql(i + 1);
			used[j] = false;
		}
	}
}

int main () {
	int t;
	cin >> t;
	cin.ignore();
	while (t--) {
		memset(used, false, sizeof(used));
		s.clear();
		cin >> s;
		sort(s.begin(), s.end());
		ql(0);
		cout << endl;
	}
}

