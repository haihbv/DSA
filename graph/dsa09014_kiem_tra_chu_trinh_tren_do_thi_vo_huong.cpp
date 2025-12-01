#include "bits/stdc++.h"

using namespace std;

#define el '\n'

vector<int> adj[1005];
bool visited[1005];
int parent[1005], n, m;

bool dfs(int u)
{
	visited[u] = true;
	for (int v : adj[u])
	{
		if (visited[v] == false)
		{
			parent[v] = u;
			if (dfs(v))
			{
				return true;
			}
		}
		else if (v != parent[u])
		{
			return true;
		}
	}
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
		memset(visited, false, sizeof(visited));
		memset(parent, 0, sizeof(parent));
		for (int i = 1; i <= n; i++)
		{
			adj[i].clear();
		}
		for (int i = 1; i <= m; i++)
		{
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		bool ok = false;
		for (int i = 1; i <= n; i++)
		{
			if (!visited[i])
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

