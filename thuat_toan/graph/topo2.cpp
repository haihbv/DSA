#include <bits/stdc++.h>

#define el '\n'

/*
 * @brief: topo ap dung cho bfs la thuat toan Kahn
 * @brief: sap xep topo ap dung cho do thi co huong ko
 *         co chu trinh
 */

int n, m;
std::vector<int> adj[1005];
int degree[1005];

void nhap(void)
{
    std::cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        std::cin >> x >> y;
        adj[x].push_back(y);
        degree[y]++;
    }
}

void kahn(void)
{
    std::queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        if (degree[i] == 0)
        {
            q.push(i);
        }
    }
    std::vector<int> topo;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        topo.push_back(u);
        for (int v : adj[u])
        {
            --degree[v];
            if (degree[v] == 0)
            {
                q.push(v);
            }
        }
    }
    if (topo.size() < n)
    {
        std::cout << "Do thi co chu trinh !\n";
    }
    else
    {
        for (int x : topo)
        {
            std::cout << x << ' ';
        }
    }
}

int main(void)
{
    std::cin.tie(0)->sync_with_stdio(0);
    nhap();
    kahn();
    return 0;
}
