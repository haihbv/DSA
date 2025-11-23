#include "bits/stdc++.h"

using namespace std;

#define el '\n'

int n;
char c[256];
char X[256];

void ql(int i, int bd)
{
	for (int j = bd; j <= n; j++)
	{
		if (i == 1 || c[j] - X[i - 1] > 0)
		{
			X[i] = c[j];
			if (i >= 1)
			{
				for (int u = 1; u <= i; u++)
				{
					cout << X[u];
				}
				cout << " ";
			}
			ql(i + 1, j + 1);
		}
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> c[i];
		}
		ql(1, 1);
		cout << el;
	}
}

