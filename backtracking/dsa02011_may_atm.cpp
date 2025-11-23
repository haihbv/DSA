#include "bits/stdc++.h"

using namespace std;

#define el '\n'

int n, s, a[105], X[105], ans;

void Try(int i, int pos, int sum)
{
	for (int j = pos; j <= n; j++)
	{
		if (sum + a[j] > s)
		{
			return;
		}
		X[i] = a[j];
		if (sum + a[j] == s)
		{
			ans = min(ans, i);
		}
		else
		{
			Try(i + 1, j + 1, sum + a[j]);
		}
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc; cin >> tc;
	while (tc--)
	{
		cin >> n >> s;
		ans = 1e9;
		for (int i = 1; i <= n; i++) cin >> a[i];
		sort(a + 1, a + n + 1);
		Try(1, 1, 0);
		if (ans != 1e9)
		{
			cout << ans;
		}
		else cout << -1;
		cout << el;
	}
}

