#include "iostream"
#include "vector"
#include "string"
#include "algorithm"

#define el '\n'
#define ll long long

using namespace std;

int m, n, a[105][105];
ll ans;

void nhap()
{
	cin >> m >> n; // m hang n cot
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
}

void Try(int i, int j)
{
	if (i == m && j == n)
	{
		ans++;
	}
	
	if (i + 1 <= m)
	{
		Try(i + 1, j);
	}
	
	if (j + 1 <= n)
	{
		Try(i, j + 1);
	}
}

void solve()
{
	ans = 0;
	Try(1, 1);
	cout << ans << el;
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--)
	{
		nhap();
		solve();
	}
}
