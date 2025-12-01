#include "bits/stdc++.h"

using namespace std;

#define el '\n'

vector<int> adj[1005];
int n, m, color[1005];

bool dfs(int u)
{
	color[u] = 1;
	for (int v : adj[u])
	{
		if (color[v] == 0)
		{
			if (dfs(v))
			{
				return true;
			}
		}
		else if (color[v] == 1)
		{
			return true;
		}
	}
	color[u] = 2;
	return false;
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc= 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n >> m;
		memset(color, 0, sizeof(color));
		for (int i = 1; i <= n; i++)
		{
			adj[i].clear();
		}
		for (int i = 1; i <= m; i++)
		{
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
		}
		bool ok = false;
		for (int i = 1; i <= n; i++)
		{
			if (color[i] == 0)
			{
				if (dfs(i))
				{
					ok = true;
					break;
				}
			}
		}
		if (!ok)
		{
			cout << "NO" << el;
		}
		else
		{
			cout << "YES" << el;
		}
	}
}

