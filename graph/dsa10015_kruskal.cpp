#include <bits/stdc++.h>

#define el '\n'

int n, m, sz[10001], parent[10001];

typedef struct
{
	int x, y, w;
} edge;

std::vector<edge> adj;

void reset();
void inp(void);
void init(void);
int Find(int u);
bool Union(int u, int v);
void kruskal(void);

bool cmpEdge(const edge &a, const edge &b)
{
	return a.w < b.w; 
}

int main()
{
	std::cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	std::cin >> tc;
	while (tc--)
	{
		reset();
		inp();
		init();
		kruskal();
	}
}

void reset()
{
	adj.clear();
}

void inp(void)
{
	std::cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		int x, y, w;
		std::cin >> x >> y >> w;
		edge e{x, y, w};
		adj.push_back(e);
	}
}
void init(void)
{
	for (int i = 1; i <= n; i++)
	{
		parent[i] = i;
		sz[i] = 1;
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
bool Union(int u, int v)
{
	u = Find(u);
	v = Find(v);
	if (u == v)
	{
		return false;
	}
	else
	{
		if (sz[u] < sz[v])
		{
			parent[u] = v;
			sz[v] += sz[u];
		}
		else
		{
			parent[v] = u;
			sz[u] += sz[v];
		}
		return true;
	}
}
void kruskal(void)
{
	sort(adj.begin(), adj.end(), cmpEdge);
	
	int d = 0;
//	std::vector<edge> mst;
	for (int i = 0; i < m; i++)
	{
//		if (mst.size() == n - 1)
//		{
//			break;
//		}
		edge e = adj[i];
		if (Union(e.x, e.y))
		{
//			mst.push_back(e);
			d += e.w;
		}
	}
	std::cout << d << el;
//	for (auto it : mst)
//	{
//		std::cout << it.x << ' ' << it.y << ' ' << it.w << el; 
//	}
}

