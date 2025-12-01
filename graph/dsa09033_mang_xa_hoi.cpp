#include "bits/stdc++.h"

#define el '\n'

int n, m;
std::vector<int> adj[100005];
int parent[100005];
bool visited[100005], ok;

void dfs(int u)
{
	if (ok)
	{
		return;
	}
	visited[u] = true;
	for (int v : adj[u])
	{
		if (!visited[v])
		{
			parent[v] = u;
			dfs(v);
		}
		else if (v != parent[u])
		{
			ok = true; 
			return;
		}
	}
}

int main()
{
	std::cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	std::cin >> tc;
	while (tc--)
	{
		std::cin >> n >> m;
		ok = false;
		for (int i = 1; i <= n; i++)
		{
			adj[i].clear();
			visited[i] = false;
			parent[i] = -1;
		}
		for (int i = 1; i <= m; i++)
		{
			int x, y;
			std::cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for (int i = 1; i <= n; i++)
		{
			if (!visited[i])
			{
				parent[i] = -1;
				dfs(i);
				if (ok) break;
			}
		}
		if (!ok) std::cout << "NO" << el;
		else std::cout << "YES" << el;
	}
}

