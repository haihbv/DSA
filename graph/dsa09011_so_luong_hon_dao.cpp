#include <bits/stdc++.h>

#define el '\n'

int n, m, a[1005][1005], cnt;

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

void dfs(int i, int j)
{
    a[i][j] = 0;
    for (int k = 0; k < 8; k++)
    {
        int i1 = i + dx[k], j1 = j + dy[k];
        if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i1][j1] == 1)
        {
            dfs(i1, j1);
        }
    }
}

signed main(void)
{
    std::cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    std::cin >> tc;
    while (tc--)
    {
        std::cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                std::cin >> a[i][j];
            }
        }
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (a[i][j] == 1)
                {
                    ++cnt;
                    dfs(i, j);
                }
            }
        }
        std::cout << cnt << el;
    }
}
