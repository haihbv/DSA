#include "bits/stdc++.h"

using namespace std;

#define el '\n'

int n, a[105], X[105];
vector<vector<int>> res;

bool nt(int n)
{
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

void nhap()
{
	cin >> n;
	X[0] = INT_MAX;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	sort(a + 1, a + n + 1, greater<int>());
}

void ql(int i, int pos, int sum)
{
	for (int j = pos; j <= n; j++)
	{
		if (a[j] < X[i - 1])
		{
			X[i] = a[j];
			if (nt(sum + a[j]))
			{
				vector<int> ans;
				for (int u = 1; u <= i; u++)
				{
					ans.push_back(X[u]);
				}
				res.push_back(ans);
			}
			ql(i + 1, j + 1, sum + a[j]);
		}
	}
}

signed main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--)
	{
		nhap(); res.clear();
		ql(1, 1, 0);
		sort(res.begin(), res.end());
		for (vector<int> x : res)
		{
			for (int y : x)
			{
				cout << y << " ";
			}
			cout << el;
		}
	}
}
