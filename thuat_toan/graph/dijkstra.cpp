#include <bits/stdc++.h>

// thuat toan tim duong di ngan nhat

using namespace std;

#define el '\n'
#define MAXN 100005

struct edge
{
    int x, y, w;
};

int n, m, st;
vector<pair<int, int>> adj[MAXN];

void nhap()
{
    cin >> n >> m >> st;
    for (int i = 0; i < m; i++)
    {
        int x, y, w;
        cin >> x >> y >> w;
        adj[x].push_back({y, w});
        adj[y].push_back({x, w});
    }
}

void dijkstra(int s)
{
    vector<int> d(n + 1, 1e9);
    d[s] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
    Q.push({0, s});
    while (!Q.empty())
    {
        // chon ra dinh u co duong ngan nhat => relaxation
        pair<int, int> top = Q.top();
        Q.pop();
        int u = top.second, kc = top.first;
        if (kc > d[u])
            continue;
        // relax
        for (auto it : adj[u])
        {
            int v = it.first, w = it.second;
            if (d[v] > d[u] + w)
            {
                d[v] = d[u] + w;
                Q.push({d[v], v});
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << d[i] << " ";
    }
}

int main()
{
    nhap();
    dijkstra(st);
}

/**
6 8
1 2 1
2 3 1
1 3 5
2 4 4
3 5 2
5 4 2
4 6 2
5 6 7
 */
