#include <bits/stdc++.h>

using namespace std;

#define el '\n'

void next_greater_right(int a[], int n, int d[]) {
	stack<int> st;
	for (int i = 0; i < n; i++) {
		while (!st.empty() && a[i] > a[st.top()]) {
			d[st.top()] = a[i];
			st.pop();
		}
		st.push(i);
	}
	while (!st.empty()) {
		d[st.top()] = -1;
		st.pop();
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		int a[n], d[n];
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		next_greater_right(a, n, d);
		for (int i = 0; i < n; i++) {
			cout << d[i] << " ";
		}
		cout << el;
	}
}

