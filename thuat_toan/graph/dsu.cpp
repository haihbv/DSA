#include "bits/stdc++.h"

#define el '\n'

/**
 * Noi 2 dinh xem co tao thanh chu trinh hay khong
 * Dem so thanh pha lien thong duoc
 */
int n, parent[1005];

void ktao()
{
    std::cin >> n;
    for (int i = 1; i <= n; i++)
    {
        parent[i] = i;
    }
}

int Find(int u)
{
    // while (u != parent[u])
    // {
    //     u = parent[u];
    // }
    // return u;
    if (u == parent[u])
    {
        return u;
    }
    else
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
        if (u < v)
        {
            parent[v] = u;
        }
        else
        {
            parent[u] = v;
        }
        return true;
    }
}

signed main(void)
{
    ktao();
    std::cout << Union(6, 7) << el;
    for (int i = 1; i <= n; i++)
    {
        std::cout << i << " " << parent[i] << el;
    }
}
