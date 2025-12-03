#include <bits/stdc++.h>

#define el '\n'

int n, m, parent[1005];
std::vector<int> adj[1005];
bool visited[1005];

bool bfs(int u)
{
	std::queue<int> q;
	q.push(u);
	visited[u] = true;
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		for (int y : adj[x])
		{
			if (!visited[y])
			{
				q.push(y);
				visited[y] = true;
				parent[y] = x;
			}
			else if (y != parent[x])
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	std::cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	std::cin >> tc;
	while (tc--)
	{
		std::cin >> n >> m;
		memset(visited, false, sizeof(visited));
		for (int i = 1; i <= n; i++)
		{
			adj[i].clear();
		}
		
		for (int i = 1; i <= m; i++)
		{
			int x, y;
			std::cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		bool ok = false;
		for (int i = 1; i <= n; i++)
		{
			if (!visited[i])
			{
				if (bfs(i)) {
					ok = true;
					break;
				}	
			}
		}
		if (ok) std::cout << "YES" << el;
		else std::cout << "NO" << el;
	}
}

