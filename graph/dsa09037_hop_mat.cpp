/**
 * @author: haihbv
 * @brief:
 */

#include <bits/stdc++.h>

using namespace std;

#define el '\n'
#define MAXN 10005

int k, n, m, dd[MAXN];
vector<int> adj[MAXN];
bool visited[MAXN];

void dfs(int u)
{
	dd[u]++;
	visited[u] = true;
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
	cin.tie(0)->sync_with_stdio(0);
	cin >> k >> n >> m;

	int person[k];
	for (int i = 0; i < k; i++)
	{
		cin >> person[i];
	}

	for (int i = 1; i <= m; i++)
	{
		int a, b;
		cin >> a >> b;
		adj[a].push_back(b);
	}

	for (int x : person)
	{
		memset(visited, false, sizeof(visited));
		if (!visited[x])
		{
			dfs(x);
		}
	}
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (dd[i] == k)
		{
			++dem;
		}
	}
	cout << dem << el;
}
