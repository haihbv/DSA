#include <bits/stdc++.h>
#define el '\n'

int n, m, bd;

std::vector<int> adj[1005];
bool visited[1005];

void bfs(int u)
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
	int tc = 1;
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
			int u, v;
			std::cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		for (int i = 1; i <= n; i++)
		{
			sort(adj[i].begin(), adj[i].end());
		}
		bfs(bd);
		std::cout << el;
	}
}

