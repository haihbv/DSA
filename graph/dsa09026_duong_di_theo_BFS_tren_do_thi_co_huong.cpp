#include "bits/stdc++.h"

#define el '\n'

using namespace std;

int n, m, bd, kt;

vector<int> adj[1005];
bool visited[1005];
int parent[1005];

void dfs(int u)
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int x = q.front();
        q.pop();
        // cout << x << " ";
        for (int y : adj[x])
        {
            if (!visited[y])
            {
                q.push(y);
                parent[y] = x;
                visited[y] = true;
            }
        }
    }
}

signed main(void)
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        cin >> n >> m >> bd >> kt;
        for (int i = 1; i <= n; i++)
        {
            adj[i].clear();
        }
        memset(visited, false, sizeof(visited));
        memset(parent, 0, sizeof(parent));
        for (int i = 1; i <= m; i++)
        {
            int x, y;
            cin >> x >> y;
            adj[x].push_back(y);
        }
        for (int i = 1; i <= n; i++)
        {
            sort(adj[i].begin(), adj[i].end());
        }
        dfs(bd);
        if (!visited[kt])
        {
            cout << -1 << el;
        }
        else
        {
            vector<int> path;
            while (kt != bd)
            {
                path.push_back(kt);
                kt = parent[kt];
            }
            path.push_back(kt);
            reverse(path.begin(), path.end());
            for (int x : path)
            {
                cout << x << " ";
            }
            cout << el;
        }
    }
    return 0;
}
