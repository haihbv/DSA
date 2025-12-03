#include <bits/stdc++.h>

#define el '\n'

/*
 * @brief: sap xep topo ap dung cho do thi co huong ko
 *         co chu trinh
 */

int n, m;

std::vector<int> adj[1005];
bool visited[1005];
std::stack<int> st;

void nhap(void)
{
    std::cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        std::cin >> x >> y;
        adj[x].push_back(y);
    }
    memset(visited, false, sizeof(visited));
}

void dfs(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (!visited[v])
        {
            visited[v] = true;
            dfs(v);
        }
    }
    st.push(u);
}

int main(void)
{
    std::cin.tie(0)->sync_with_stdio(0);
    nhap();
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs(i);
        }
    }

    while (!st.empty())
    {
        std::cout << st.top() << ' ';
        st.pop();
    }
    std::cout << el;
    return 0;
}
