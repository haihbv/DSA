#include <bits/stdc++.h>

using namespace std;

#define el '\n'
int n, m; 

vector<int> adj[1005];
bool visited[1005];
int tplt[1005], cnt = 0;

void reset()
{
	cnt = 0;
	for (int i = 1; i <= n; i++)
	{
		adj[i].clear();
	}
	memset(visited, false, sizeof(visited));
	memset(tplt, 0, sizeof(tplt));
}

void dfs(int u)
{
	visited[u] = true;
	tplt[u] = cnt;
	for (int v : adj[u])
	{
		if (!visited[v])
		{
			dfs(v);
		}
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--)
	{
		cin >> n >> m;
		reset();
		for (int i = 0; i < m; i++)
		{
			int u, v; cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		for (int i = 1; i <= n; i++)
		{
			if (!visited[i])
			{
				cnt++;
				dfs(i);
			}
		}
		int q;
		cin >> q;
		while (q--)
		{
			int x, y;
			cin >> x >> y;
			if (tplt[x] == tplt[y])
			{
				cout << "YES" << el;
			}
			else
			{
				cout << "NO" << el;
			}
		}
	}
}


