#include "iostream"
#include "algorithm"
#include "cstring"

#define el '\n'

using namespace std;

int n = 8, a[9][9], X[9];
int col[9], cheo_xuoi[17], cheo_nguoc[17];
int ans;

void ktao()
{
	a[0][0] = 0;
	memset(col, 0, sizeof(col));
	memset(cheo_xuoi, 0, sizeof(cheo_xuoi));
	memset(cheo_nguoc, 0, sizeof(cheo_nguoc));
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
}

void Try(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if (col[j] == 0 && cheo_xuoi[i-j+n] == 0 && cheo_nguoc[i+j-1] == 0)
		{
			X[i] = j;
			col[j] = 1; cheo_xuoi[i-j+n] = 1; cheo_nguoc[i+j-1] = 1;
			if (i == n)
			{
				int sum = 0;
				for (int k = 1; k <= n; k++)
				{
					sum += a[k][X[k]];
				}
				ans = max(ans, sum);
			}
			else
			{
				Try(i + 1);
			}
			col[j] = 0; cheo_xuoi[i-j+n] = 0; cheo_nguoc[i+j-1] = 0;
		}
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	for (int t = 1; t <= tc; t++)
	{
		ktao();
		ans = 0;
		Try(1);
		cout << "Test " << t << ": " << ans << el;
	}
}
