#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define ll long long

ll xuly(ll n, char p, char q) {
	string s;
	s = to_string(n);
	for (int i = 0; i < s.length(); i++) {
		if (s[i] == p) {
			s[i] = q;
 		}
	}
	return stoll(s); 
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	ll n, m;
	cin >> n >> m;
	// 5 5
	cout << xuly(n, '6', '5') + xuly(m, '6', '5') << " ";
	cout << xuly(n, '5', '6') + xuly(m, '5', '6') << el; 
}

