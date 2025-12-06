#include <bits/stdc++.h>

using namespace std;

// vl bai nay test case truong bi sai =))
void right_greater(int a[], int n, int d1[])
{
	stack<int> st;
	for (int i = 0; i < n; i++)
	{
		while (!st.empty() && a[i] > a[st.top()])
		{
			d1[st.top()] = i; st.pop();
		}
		st.push(i);
	}
	while (!st.empty())
	{
		d1[st.top()] = -1; st.pop();
	}
}
void right_smaller(int a[], int n, int d2[])
{
	stack<int> st;
	for (int i = 0; i < n; i++)
	{
		while (!st.empty() && a[i] < a[st.top()])
		{
			d2[st.top()] = i; st.pop();
		}
		st.push(i);
	}
	while (!st.empty())
	{
		d2[st.top()] = -1; st.pop();
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		int n; cin >> n;
		int d1[n], d2[n], a[n];
		for (int &x : a) cin >> x;
		right_greater(a, n, d1);
		right_smaller(a, n, d2);
		for (int i = 0; i < n; i++)
		{
			if (d1[i] != -1 && d2[d1[i]] != -1)
				cout << a[d2[d1[i]]] << " ";
			else cout << -1 << " ";
		}
		cout << endl;
	}
}

