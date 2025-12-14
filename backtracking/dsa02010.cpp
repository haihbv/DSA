#include "bits/stdc++.h"
#define el '\n'

using namespace std;

int n, s, X[105], a[105];

vector<vector<int>> res;

void ql(int i, int bd, int sum)
{
	for (int j = bd; j <= n; j++)
	{
		if (sum + a[j] > s)
		{
			return;
		}
		if (sum + a[j] <= s)
		{
			X[i] = a[j];
			if (sum + a[j] == s)
			{
				vector<int> tmp;
				for (int u = 1; u <= i; u++)
				{
					tmp.push_back(X[u]);
				}
				res.push_back(tmp);
			}
			else
			{
				ql(i + 1, j, sum + a[j]);
			}
		}
	}
}

int main()
{
	cin.tie(0)->sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n >> s;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		sort(a + 1, a + n + 1);
		res.clear();
		ql(1, 1, 0);
		if (res.empty())
		{
			cout << "-1";
		}
		else{
			sort(res.begin(), res.end());
			for (int u = 0; u <= res.size() - 1; u++)
			{
				cout << "[";
				for (int v = 0; v <= res[u].size() - 1; v++)
				{
					if (v) cout << " ";
					cout << res[u][v];
				}
				cout << "]";
			}
		}
		cout << el;
	}
}
