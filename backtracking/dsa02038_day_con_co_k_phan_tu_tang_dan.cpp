#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, k, a[105], X[105];
vector<vector<int>> res;

//3 2 5 4
//sort = 2 3 4 5
//X[1] = a[1] = 2
//X[2] = a[2] = 3 -> t/m
//X[2] = a[3] = 4 -> t/m
//X[2] = a[4] = 5 -> t/m

void ql(int i, int pos)
{
	for (int j = pos; j <= n; j++)
	{
		if (a[j] > X[i - 1])
		{
			X[i] = a[j];
			if (i == k)
			{
				for (int u = 1; u <= i; u++)
				{
					cout << X[u] << " ";
				}
				cout << el;
			}
			else
			{
				ql(i + 1, j + 1);
			}
		}
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n >> k;
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		sort(a + 1, a + n + 1);
		X[0] = 0; res.clear();
		ql(1,1);
	}
}

