#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, m;

vector<int> adj[1005];
bool visited[1005];
vector<pair<int, int>> edge;

void dfs(int u, int s, int t)
{
	visited[u] = true;
	for (int v : adj[u])
	{
		if ((u==s&&v==t) || (u==t&&v==s))
		{
			continue;
		}
		if (!visited[v])
		{
			dfs(v, s, t);
		}
	}
}

int tplt(int s, int t)
{
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		if (!visited[i])
		{
			++ans;
			dfs(i, s, t);
		}
	}
	return ans;
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n >> m;
		edge.clear();
		for (int i = 1; i <= n; i++)
		{
			adj[i].clear();
		}
		memset(visited, false, sizeof(visited));
		for (int i = 1; i <= m; i++)
		{
			int x, y;
			cin >> x >> y;
			edge.push_back({x, y});
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		for (int i = 1; i <= n; i++)
		{
			sort(adj[i].begin(), adj[i].end());
		}
		int cc = tplt(0, 0);
		for (pair<int, int> e : edge)
		{
			int x = e.first, y = e.second;
			memset(visited, false, sizeof(visited));
			if (cc < tplt(x, y))
			{
				cout << x << ' ' << y << ' ';
			}
		}
		cout << el;
	}
}

