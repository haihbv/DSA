#include "bits/stdc++.h"

using namespace std;

#define el '\n'

int n, k, a[105], X[105], tong;
bool used[105], ok;

void Try(int i, int pos, int sum, int need)
{
	if (ok) return;
	if (need == k + 1)
	{
		ok = 1;
		return;
	}
	for (int j = pos; j <= n; j++)
	{
		if (!used[j] && sum + a[j] <= tong)
		{
			X[i] = a[j];
			used[j] = true;
			if (sum + a[j] == tong)
			{
				Try(i + 1, 1, 0, need + 1);
			}
			else
			{
				Try(i + 1, j + 1, sum + a[j], need);
			}
			used[j] = false;
		}
	}
}

signed main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n >> k;
		tong = 0; ok = false;
		for (int i = 1; i <= n; i++) 
		{
			cin >> a[i];
			tong += a[i];
		}
		sort(a + 1, a + n + 1, greater<int>());
		X[0] = -1;
		memset(used, false, sizeof(used));
		if (tong % k == 0)
		{
			tong /= k;
			Try(1, 1, 0, 1);
			cout << ok;
		}
		else
		{
			cout << 0;
		}
		cout << el;
	}
}
