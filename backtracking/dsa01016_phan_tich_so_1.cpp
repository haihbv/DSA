#include "bits/stdc++.h"

using namespace std;

#define el '\n'

int n, s, X[105];
vector<vector<int>> res;

void Try(int i, int pos, int sum)
{
	for (int j = pos; j >= 1; j--)
	{
		if (sum + j <= s)
		{
			X[i] = j;
			if (sum + j == s)
			{
				vector<int> tmp;
				for (int u = 1; u <= i; u++)
				{
					tmp.push_back(X[u]);
				}
				res.push_back(tmp);
			}
			Try(i + 1, j, sum + j);
		}
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--)
	{
		cin >> n;
		X[0] = 0;
		s = n; res.clear();
		Try(1, n, 0);
		// cout << res.size() << el;
		for (int i = 0; i <= res.size() - 1; i++)
		{
			cout << "(";
			for (int j = 0; j <= res[i].size() - 1; j++)
			{
				cout << res[i][j];
				if (j != res[i].size() - 1)
				{
					cout << " ";
				}
			}
			cout << ") ";
		}
		cout << el;
	}
}
