#include "bits/stdc++.h"

using namespace std;

#define el '\n'

int n, c[105][105], X[105];
int visited[105];
int ans = INT_MAX, cmin = INT_MAX;

// X[i] = j: thanh pho thu i toi di qua la thanh pho j

void Try(int i, int dis)
{
	for (int j = 1; j <= n; j++)
	{
		if (!visited[j])
		{
			X[i] = j;
			visited[j] = 1;
			dis += c[X[i - 1]][X[i]];;
			if (i == n)
			{
				// cap nhat ket qua
				ans = min(ans, dis + c[X[n]][1]);
			}
			else if (dis + (n - i + 1) * cmin < ans)
			{
				Try(i + 1, dis);
			}
			visited[j] = 0;
			dis -= c[X[i - 1]][X[i]];
		}
	}
}

signed main()
{
	cin.tie(0) -> sync_with_stdio(0);
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> c[i][j];
			if (c[i][j] != 0)
			{
				cmin = min(cmin, c[i][j]);
			}
		}
	}
	X[1] = 1;
	memset(visited, 0, sizeof(visited));
	visited[1] = 1;
	Try(2, 0);
	cout << ans << el;
}

