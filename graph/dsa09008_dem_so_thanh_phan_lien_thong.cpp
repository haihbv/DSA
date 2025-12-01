#include "bits/stdc++.h"

#define el '\n'

using namespace std;

int n, m;
vector<int> adj[1005];
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

signed main(void)
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n >> m;
		for (int i = 1; i <= n; i++) adj[i].clear();
		memset(visited, false, sizeof(visited));
		for (int i = 1; i <= m; i++)
		{
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		// dfs(1);
		cout << tplt() << el;
	}
}

