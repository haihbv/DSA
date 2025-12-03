#include <bits/stdc++.h>

#define el '\n'

using namespace std;

int n, m, c, color[1005];
vector<int> adj[1005];
bool ok;

bool check(int u, int i)
{
	for (int v : adj[u])
	{
		if (color[v] == i)
		{
			return false;
		}
	}
	return true;
}

void ql(int u)
{
	if (ok) return;
	for (int i = 1; i <= c; i++)
	{
		if (check(u, i))
		{
			color[u] = i;
			if (u == n)
			{
				ok = true;
				return;
			}
			else ql(u + 1);
			color[u] = 0;
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
		cin >> n >> m >> c;
		for (int i = 1; i <= n; i++) {
			adj[i].clear();
		}
		memset(color, 0, sizeof(color));
		ok = false;
		for (int i = 1; i <= m; i++) {
			int x, y;
			cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		ql(1);
		if (!ok)
		{
			cout << "NO" << el;
		}
		else
		{
			cout << "YES" << el;
		}
	}
}

