#include "bits/stdc++.h"

using namespace std;

#define el '\n';

int n, k, X[105], a[105];
vector<vector<int>> res;

void Try(int i, int bd, int sum)
{
	for (int j = bd; j <= n; j++)
	{
		X[i] = a[j];
		if (sum + a[j] == k)
		{	
			vector<int> ans;
			for (int u = 1; u <= i; u++)
			{
				ans.push_back(X[u]);
			}
			res.push_back(ans);
		}
		else if (sum + a[j] < k)
		{
			Try(i + 1, j + 1, sum + a[j]);
		}
	}
}

int main()
{
	cin >> n >> k;
	X[0] = 0;
	for (int i = 1; i <= n; i++) cin >> a[i];
	Try(1, 1, 0);
	for (int i = res.size() - 1; i >= 0; i--)
	{
		for (int j = 0; j < res[i].size(); j++)
		{
			cout << res[i][j] << " ";
		}
		cout << el;
	}
	cout << res.size() << el;
}
