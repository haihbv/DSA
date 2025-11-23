#include "bits/stdc++.h"

using namespace std;

#define el '\n'

int n, s, a[105], X[105], ok;

void Try(int i, int prev, int sum)
{
	if (ok) return;
	for (int j = prev; j <= n; j++)
	{
		if (sum + a[j] <= s)
		{
			X[i] = a[j];
			if (sum + a[j] == s)
			{
				ok = 1;
				return;
			}
			else
			{
				Try(i + 1, j + 1, sum + a[j]);
			}
		}
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--)
	{
		cin >> n; s= 0; ok = 0;
		for (int i = 1; i <= n; i++) cin >> a[i], s += a[i];
		sort(a + 1, a + n + 1);
		if (s % 2 == 1)
		{
			cout << "NO" << el;
			continue;
		}
		s /= 2;
		Try(1, 1, 0);
		cout << (ok ? "YES" : "NO");
		cout << el;
	}
}


