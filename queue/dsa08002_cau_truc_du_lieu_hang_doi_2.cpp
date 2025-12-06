#include <bits/stdc++.h>

using namespace std;

#define el '\n'

queue<int> q;

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int n; cin >> n;
	cin.ignore();
	while (n--) {
		string s;
		cin >> s;
		if (s == "PUSH") {
			int x; cin >> x;
			q.push(x);
			// cout << q.front() << el;
		} else if (s == "PRINTFRONT") {
			if (!q.empty()) {
				cout << q.front() << el;
			} else {
				cout << "NONE" << el;
			}
		} else if (s == "POP") {
			if (!q.empty()) q.pop();
		}
	}
	return 0;
}
