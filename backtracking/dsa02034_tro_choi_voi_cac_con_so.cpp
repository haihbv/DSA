#include "bits/stdc++.h"

#define el '\n'

using namespace std;

int n, X[105];
bool visited[105];

void inkq()
{
	for (int i = 1; i <= n; i++)
	{
		cout << X[i];
	}
}

// X[i] = j
// Try(1, -1) X[1] = 2, 3 != 1 -> out
// Try(2, 2) X[2] = 4, 2 != 1 -> out
// Try(3, 4) X[3] = 1,   

void Try(int i, int prev)
{
	for (int j = 1; j <= n; j++)
	{
		if (visited[j] == false && abs(j - prev) != 1)
		{
			X[i] = j;
			visited[j] = true;
			if (i == n)
			{
				inkq();
				cout << el;
			}
			else
			{
				Try(i + 1, j);
			}
			visited[j] = false;
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
		cin >> n;
		memset(visited, false, sizeof(visited));
		Try(1, -1);
	}
}

