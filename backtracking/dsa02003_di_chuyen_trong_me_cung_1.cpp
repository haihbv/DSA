#include "iostream"
#include "string"
#define el '\n'

using namespace std;

int a[105][105], n;
bool is_check;
string s;

void input(void)
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
}

void Try(int i, int j)
{
	if (i == n && j == n)
	{
		cout << s << " ";
		is_check = true;
		return;
	}
	if (i + 1 <= n && a[i + 1][j] == 1)
	{
		a[i + 1][j] = 0;
		s += "D";
		Try(i + 1, j);
		s.pop_back();
		a[i + 1][j] = 1;
	}
	if (j + 1 <= n && a[i][j + 1] == 1)
	{
		a[i][j + 1] = 0;
		s += "R";
		Try(i, j + 1);
		s.pop_back();
		a[i][j + 1] = 1;
	}
}

void solve()
{
	is_check = false;
	if (a[1][1] == 1 && a[n][n] == 1)
	{
		Try(1, 1);
	}
	if (!is_check)
	{
		cout << -1;
	}
	cout << el;
}

signed main(void)
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--)
	{
		input();
		solve();
	}
}


