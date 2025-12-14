#include <bits/stdc++.h>

using namespace std;

#define el '\n'
	
int n, p, s, X[105];
vector<int> prime;

bool nt(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

void ktao() {
	for (int i = 0; i <= 200; i++) {
		if (nt(i)) prime.push_back(i);
	}
}

vector<string> v;

void ql(int i, int bd, int sum) {
	for (int j = bd; j < prime.size(); j++) {
		if (i > n) return;
		if (sum + prime[j] <= s) {
			X[i] = prime[j];
			if (sum + prime[j] == s && i == n) {
				string tmp = "";
				for (int u = 1; u <= i; u++) {
					tmp += to_string(X[u]);
					tmp += " ";
				}
				v.push_back(tmp);
			}
			else ql(i + 1, j + 1, sum + prime[j]);
		}
	}
}

int main() {
	ktao();
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--) {
		v.clear();
		cin >> n >> p >> s;
		int st = 0;
		for (int i = 0; i <= prime.size(); i++) {
			if (prime[i] > p) {
				st = i;
				break;
			}
		}
		ql(1, st, 0);
		sort(v.begin(), v.end());
		cout << v.size() << el;
		for (string u : v) {
			cout << u << el;
		}
	}
}

