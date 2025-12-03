#include "bits/stdc++.h"

#define el '\n'
#define MAXN 1005

/**
* @param: del hieu sao del AC
*/

int n, m, parent[MAXN], start, endd;
std::vector<int> adj[MAXN];
bool visited[MAXN], ok;

void dfs(int u)
{
	visited[u] = true;
	for (int v : adj[u])
	{
		if (ok)
		{
			return;
		}
		if (!visited[v])
		{
			parent[v] = u;
			dfs(v);
		}
		else if (v != parent[u])
		{
			ok = 1;
			start = v;
			endd = u;
			return;
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
		
		// reset
		for (int i = 1; i < MAXN; ++i) {
            adj[i].clear();
            visited[i] = false;
            parent[i] = -1;
        }
		
		// nhap
		for (int i = 1; i <= m; i++)
		{
			int x, y;
			std::cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		
		ok = false; start = endd = -1;
		dfs(1);
		
		
		if (!ok)
		{
			std::cout << "NO" << el;
		}
		else
		{
			std::vector<int> path;
			int cur = endd;
			while (true)
			{
				path.push_back(cur);
				if (cur == start) break;
				cur = parent[cur];
			}
			reverse(path.begin(), path.end());
			path.push_back(start);
			for (int x : path)
			{
				std::cout << x << " ";
			}
			std::cout << el;
		}
	}
}

