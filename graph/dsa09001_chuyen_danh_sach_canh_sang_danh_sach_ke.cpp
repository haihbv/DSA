#include "bits/stdc++.h"

using namespace std;

#define el '\n'

vector<int> adj[1005];

signed main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--)
	{
		int n, m;
		cin >> n >> m;
		for (int i = 0; i <= n; i++)
		{
			adj[i].clear();
		}
		while (m--)
		{
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		for (int i = 1; i <= n; i++)
		{
			cout << i << ": ";
			for (int j = 0; j < adj[i].size(); j++)
			{
				cout << adj[i][j] << " ";
			}
			cout << el;
		}
	}
	
}

