#include <bits/stdc++.h>

/*
 * @author: haihbv
 * @brief: giai quyet cac bai toan ve do thi lien thong manh, dung de liet ke cac thanh phan
 *         lien thong manh cua do thi va vi the co the su dung de kiem tra do thi lien thong manh
 * strongly connected component (scc)
 */

int n, m;
std::vector<int> adj[100005], t_adj[100005];
bool visited[100005];
std::stack<int> st;
#define el '\n'

void nhap()
{
    std::cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        std::cin >> x >> y;
        adj[x].push_back(y);
        t_adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}

void dfs1(int u)
{
    visited[u] = true;
    for (int v : adj[u])
    {
        if (!visited[v])
        {
            dfs1(v);
        }
    }
    st.push(u);
}

void dfs2(int u)
{
    std::cout << u << ' ';
    visited[u] = true;
    for (int v : t_adj[u])
    {
        if (!visited[v])
        {
            dfs2(v);
        }
    }
}

void kosaraju(void)
{
    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            dfs1(i);
        }
    }
    memset(visited, false, sizeof(visited));
    int scc = 0;
    while (!st.empty())
    {
        int top = st.top();
        st.pop();
        if (!visited[top])
        {
            ++scc;
            std::cout << "scc " << scc << ": ";
            dfs2(top);
            std::cout << el;
        }
    }
}

int main()
{
    std::cin.tie(0)->sync_with_stdio(0);
    nhap();
    kosaraju();
}
