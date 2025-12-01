#include "bits/stdc++.h"

#define el '\n'

int n, m;
std::vector<int> adj[100005];
bool visited[100005];
int cnt, ans;
void dfs(int u)
{
	++cnt;
	visited[u] = true;
	for (int v : adj[u])
	{
		if (!visited[v])
		{
			dfs(v);
		}
	}
}

void ketban()
{
	for (int i = 1; i <= n; i++)
	{
		cnt = 0;
		if (!visited[i])
		{
			dfs(i);
			ans = std::max(ans, cnt);
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
		cnt = 0; ans = INT_MIN;
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
		ketban();
		std::cout << ans << el;
	}
}

