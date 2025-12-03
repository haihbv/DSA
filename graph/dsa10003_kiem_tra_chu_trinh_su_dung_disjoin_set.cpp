#include <bits/stdc++.h>

#define el '\n'

using namespace std;

int n, m;
vector<int> adj[1005];

int parent[1005], sz[1005];
bool ok;

void ktao()
{
	for (int i = 1 ; i <= n; i++)
	{
		parent[i] = i;
		// sz[i] = 1;
	}
}

int Find(int u)
{
	if (u == parent[u])
	{
		return u;
	}
	return parent[u] = Find(parent[u]);
}

void Union(int u, int v)
{
	u = Find(u);
	v = Find(v);
	if (u == v)
	{
		ok = true; // ko co chu trinh
		return;
	}
	else 
	{
		if (u < v)
		{
			parent[v] = u;
		}
		else
		{
			parent[u] = v;
		}
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n >> m;
		for (int i = 1; i <= n; i++)
		{
			adj[i].clear();
		}
		memset(parent, 0, sizeof(parent));
		ok = false;
		ktao();
		for (int i = 1; i <= m; i++)
		{
			int x, y;
			cin >> x >> y;
			Union(x, y);
		}
		if (ok)
		{
			cout << "YES" << el;
		}
		else 
		{
			cout << "NO" << el;
		}
	}
}

