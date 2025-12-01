#include <bits/stdc++.h>

#define el '\n'

int n, m;

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
		for (int v : adj[x])
		{
			if (!visited[v])
			{
				q.push(v);
				visited[v] = true;
			}
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
			bfs(i);
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
		std::cout << tplt() << el;
	}
}

