#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define el '\n'

int a[100005], b[100005];

void solve(int a[], int n)
{
	vector<int> res(n, -1);
	stack<int> st;
	
	for (int i = 0; i < n; i++)
	{
		while (!st.empty() && a[i] > a[st.top()]) {
			res[st.top()] = a[i];
			st.pop();
		}
		st.push(i);
	}
	
	for (int i = 0; i < n; i++)
	{
		cout << res[i] << " ";
	}
	cout << el;
}
int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--) {
		int n;
		cin >> n;
		for (int i = 0; i < n; i++) {
    		cin >> a[i];
		}
		solve(a, n);
	}
}


