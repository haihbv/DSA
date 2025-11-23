#include "bits/stdc++.h"

using namespace std;

#define el '\n'

int n, X[105], visited[105];

void inkq()
{
	for (int i = 1; i <= n; i++)
	{
		cout << X[i];
	}
}

void ql(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if (!visited[j] && abs(j - X[i - 1]) != 1) 
		{
			X[i] = j;
			visited[j] = 1;
			if (i == n)
			{
				inkq();
				cout << el;
			}
			else
			{
				ql(i + 1);
			}
			visited[j] = 0;
		}
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc; cin >> tc;
	while (tc--)
	{
		cin >> n;
		X[0] = -1;
		memset(visited, 0, sizeof(visited));
		ql(1);
	}
}
