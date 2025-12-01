#include "bits/stdc++.h"

#define el '\n'

int n, m, bd;

std::vector<int> adj[1005];
bool visited[1005];

void dfs(int u)
{
	std::queue<int> q;
	q.push(u);
	visited[u] = true;
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		std::cout << x << " ";
		for (int y : adj[x])
		{
			if (!visited[y])
			{
				q.push(y);
				visited[y] = true;
			}
		}
	}
}

int main()
{
	std::cin.tie(0)->sync_with_stdio(0);
	int tc;
	std::cin >> tc;
	while (tc--)
	{
		std::cin >> n >> m >> bd;
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
		}
		for (int i = 1; i <= n; i++)
		{
			sort(adj[i].begin(), adj[i].end());
		}
		dfs(bd);
		std::cout << el;
	}
}
