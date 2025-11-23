#include "iostream"

#define el '\n'

using namespace std;

int n, k, s, cnt, X[105];

void Try(int i, int bd, int sum)
{
	for (int j = bd; j <= n; j++)
	{
		if (sum + j > s)
			return;
		X[i] = j;
		if (i == k)
		{
			if (sum + j == s)
			{
				++cnt;
			}
		}
		else
		{
			Try(i + 1, j + 1, sum + j);
		}
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	while (1)
	{
		cin >> n >> k >> s;
		if (n == 0 && k == 0 && s == 0)
			break;
		cnt  = 0;
		Try(1, 1, 0);
		cout << cnt << el;
	}
}

