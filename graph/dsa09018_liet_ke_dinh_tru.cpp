#include "bits/stdc++.h"
#define el '\n'

int n, m;
std::vector<int> adj[1005];
bool visited[1005];

void bfs(int u)
{
    std::queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int v : adj[u])
        {
            if (!visited[v])
            {
                q.push(v);
                visited[v] = true;
            }
        }
    }
}

int tplt(void)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            ++ans;
            bfs(i);
        }
    }
    return ans;
}

signed main(void)
{
    std::cin.tie(0)->sync_with_stdio();
    int tc = 1;
    std::cin >> tc;
    while (tc--)
    {
        std::cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            adj[i].clear();
        }
        memset(visited, false, sizeof(visited));
        int cnt = 0;

        for (int i = 1; i <= m; i++)
        {
            int x, y;
            std::cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int cc = tplt();
        for (int i = 1; i <= n; i++)
        {
            memset(visited, false, sizeof(visited));
            visited[i] = true;
            if (cc < tplt())
            {
                std::cout << i << " ";
            }
        }
        std::cout << el;
    }
}
