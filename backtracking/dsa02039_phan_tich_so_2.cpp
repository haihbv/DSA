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
				for (int k = 1; k <= i; k++)
				{
					tmp.push_back(X[k]);
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
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n;
		s = n;
		res.clear();
		Try(1,n,0);
		cout << res.size() << el;
		for (int u = 0; u < res.size(); u++)
		{
			cout << "(";
			for (int v = 0; v < res[u].size(); v++)
			{
				cout << res[u][v];
				if (v < res[u].size() - 1)
				{
					cout << " ";
				}
			}
			cout << ") ";
		}
		cout << el;
	}
}

