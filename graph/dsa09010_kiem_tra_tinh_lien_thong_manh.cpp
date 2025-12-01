#include <bits/stdc++.h>

#define el '\n'

std::vector<int> adj[1005];
bool visited[1005];
int cnt, n, m;

void dfs(int u)
{
	cnt++;
	visited[u] = true;
	for (int v : adj[u])
	{
		if (!visited[v])
		{
			dfs(v);
		}
	}
}

bool check()
{
	for (int i = 1; i <= n; i++)
	{
		cnt = 0;
		memset(visited, false, sizeof(visited));
		dfs(i);
		if (cnt != n)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	std::cin.tie(0) -> sync_with_stdio(0);
	int tc;
	std::cin >> tc;
	while (tc--)
	{
		cnt = 0;
		std::cin >> n >> m;
		memset(visited, false, sizeof(visited));
		for (int i = 1; i <= n; i++) {
			adj[i].clear();
		}
		for (int i = 1; i <= m; i++)
		{
			int x, y;
			std::cin >> x >> y;
			adj[x].push_back(y);
		}
		if (check())
		{
			std::cout << "YES" << el;
		}
		else
		{
			std::cout << "NO" << el;
		}
	}
}

