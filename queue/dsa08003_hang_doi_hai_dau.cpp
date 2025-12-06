// size()
// push_front(): them vao dau
// push_back(): them vao cuoi
// pop_front(): xoa dau
// pop_back(): xoa cuoi
// empty();
// front(): lay ra phan tu o dau
// back()" lay ra phan tu o cuoi

#include <bits/stdc++.h>

using namespace std;

#define el '\n'

signed main() {
	cin.tie(0) -> sync_with_stdio(0);
	int Q; cin >> Q;
	deque<int> d;
	cin.ignore();
	while (Q--)
	{
		string s;
		cin >> s;
		if (s == "PUSHFRONT") {
			int x; cin >> x;
			d.push_front(x);
		} else if (s == "PRINTFRONT") {
			if (!d.empty()) {
				cout << d.front() << el;
			} else {
				cout << "NONE" << el;
			}
		} else if (s == "POPFRONT") {
			if (!d.empty()) d.pop_front();
		} else if (s == "PUSHBACK") {
			int x; cin >> x;
			d.push_back(x);
		} else if (s == "PRINTBACK") {
			if (!d.empty()) {
				cout << d.back() << el;
			} else {
				cout << "NONE" << el;
			}
		} else if (s == "POPBACK") {
			if (!d.empty()) d.pop_back();
		}
	}
}