#include <bits/stdc++.h>

using namespace std;

#define el '\n'

// stock span problem
// vi du: ngay thu 5 (75), lui ve sau xem co ngay nao <= 
// gia cua ngay thu 5 cho den ngay 1 (80) = 5 - 1 = 4

void solve(int *a, int n, int *d) {
	stack<int> st;
	for (int i = 0; i < n; i++) {
		while (!st.empty() && a[i] >= a[st.top()]) {
			st.pop();
		}
		if (st.empty()) {
			d[i] = i + 1;
		}
		else {
			d[i] = i - st.top();
		}
		st.push(i);
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1; cin >> tc;
	while (tc--) {
		int n; cin >> n;
		int a[n], d[n];
		for (int &x : a) cin >> x;
		for (int i = 0; i < n; i++) {
			d[i] = 1;
		}
//		for (int i = 0; i < n; i++) {
//			cout << d[i] << " ";
//		}
		solve(a, n, d);
		for (int i = 0; i < n; i++) {
			cout << d[i] << " ";
		}
		cout << el;
	}
}

