#include "bits/stdc++.h"

#define el '\n'

int n, m;
std::vector<int> adj[1005];
bool visited[1005];

void dfs(int u)
{
	visited[u] = true;
	for (int v : adj[u])
	{
		if (!visited[v])
		{
			dfs(v);
		}
	}
}

int tplt()
{
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		if (!visited[i])
		{
			++ans;
			dfs(i);
		}
	}
	return ans;
}

int main()
{
	std::cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	std::cin >> tc;
	while (tc--)
	{
		std::cin >> n >> m;
		for (int i = 1; i <= n; i++)
		{
			adj[i].clear();
		}
		memset(visited, false, sizeof(visited));
		for (int i = 1; i <= m; i++)
		{
			int x, y;
			std::cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for (int i = 1; i <= n; i++)
		{
			sort(adj[i].begin(), adj[i].end());
		}
		int cc = tplt();
		for (int i = 1; i <= n; i++)
		{
			memset(visited, false, sizeof(visited));
			visited[i] = true;
			if (cc < tplt())
			{
				std::cout << i << " ";
			}
		}
		std::cout << el;
	}
}

