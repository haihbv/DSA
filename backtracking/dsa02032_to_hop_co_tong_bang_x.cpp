#include "bits/stdc++.h"

using namespace std;

#define el '\n'

int n, x, a[105], X[105];
bool ok;

vector<vector<int>> res;

void ql(int i, int pos, int sum)
{
	for (int j = pos; j <= n; j++)
	{
		if (sum + a[j] <= x)
		{
			X[i] = a[j];
			if (sum + a[j] == x)
			{
				vector<int> tmp;
				for (int k = 1; k <= i; k++)
				{
					tmp.push_back(X[k]);
				}
				res.push_back(tmp);
			}
			ql(i + 1, j, sum + a[j]);
		}
	}
}

signed main(void)
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--)
	{
		cin >> n >> x;
		a[0] = X[0] = 0;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		sort(a + 1, a + n + 1);
		res.clear();
		ql(1, 1, 0);
		if (res.empty())
		{
			cout << "-1" << el;
			continue;
		}
		cout << res.size() << " ";
		for (int i = 0; i <= res.size() - 1; i++)
		{
			cout << "{";
			for (int j = 0; j <= res[i].size() - 1; j++)
			{
				cout << res[i][j];
				if (j != res[i].size() - 1)
				{
					cout << " ";
				}
			}
			cout << "} ";
		}
		cout << el;
	}
}

