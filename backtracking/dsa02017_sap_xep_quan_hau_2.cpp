#include "bits/stdc++.h"

using namespace std;

#define el '\n'

int n = 8, a[9][9], X[9], col[9], cheo_xuoi[17], cheo_nguoc[17];
int res;

// X[i] = j; hau o hang i cot j
// cheo_xuoi; i-j+n
// cheo_nguoc; i+j-1
void nhap()
{
	memset(X, 0, sizeof(X));
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
		if (col[j] == 0 && cheo_xuoi[i-j+n] == 0 && cheo_nguoc[i+j-1]==0)
		{
			X[i] = j;
			col[j] = 1;
			cheo_xuoi[i-j+n] = 1;
			cheo_nguoc[i+j-1] = 1;
			if (i == n)
			{
				int sum = 0;
				for (int hang = 1; hang <= i; hang++)
				{
					sum += a[hang][X[hang]];
				}
				res = max(res, sum);
			}
			else
			{
				Try(i + 1);
			}
			col[j] = 0;
			cheo_xuoi[i-j+n] = 0;
			cheo_nguoc[i+j-1] = 0;
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
		nhap();
		res = 0;
		Try(1);
		cout << res << el;
	}
}

