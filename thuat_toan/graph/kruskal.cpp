#include <bits/stdc++.h>

#define el '\n'

struct edge
{
    int x, y, w;
};

#define MAXN 100001

int n, m, sz[MAXN], parent[MAXN];
std::vector<edge> adj;

void init()
{
    for (int i = 1; i <= n; i++)
    {
        sz[i] = 1;
        parent[i] = i;
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
        return false; // ko gop dc
    }
    if (sz[u] > sz[v])
    {
        parent[v] = u;
        sz[u] += sz[v];
    }
    else
    {
        parent[u] = v;
        sz[v] += sz[u];
    }
    return true;
}

void inp()
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

void kruskal()
{
    // sap xep ds canh theo trong so tang dan
    sort(adj.begin(), adj.end(), [](edge a, edge b) -> bool
         { return a.w < b.w; });

    // lap
    int d = 0;
    std::vector<edge> mst; // luu cac canh cua cay khung
    for (int i = 0; i < m; i++)
    {
        if (mst.size() == n - 1)
        {
            break; // da co n - 1 canh thi dung
        }
        edge e = adj[i];
        // mst + e => co tao thanh chu trinh khong
        if (Union(e.x, e.y))
        {
            mst.push_back(e);
            d += e.w;
        }
    }
    if (mst.size() < n - 1)
    {
        std::cout << "Ko ket noi duoc duong di\n";
    }
    else
        std::cout << d << el;
    for (edge it : mst)
    {
        std::cout << it.x << ' ' << it.y << ' ' << it.w << el;
    }
}

/**
 * TEST:
 * INPUT:
 * 6 9
 * 1 2 1
 * 1 3 2
 * 3 2 3
 * 2 4 4
 * 2 5 7
 * 3 5 5
 * 4 5 3
 * 4 6 2
 * 5 6 2
 * OUTPUT:
 * 11
 * 1 2 1
 * 1 3 2
 * 4 6 2
 * 5 6 2
 * 2 4 4
 */

signed main(void)
{
    inp();
    init();
    kruskal();
}
