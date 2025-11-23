#include "bits/stdc++.h"

#define el '\n'

using namespace std;

char X[105], c;
bool visited[256];
int n;

bool check(char c)
{
	return c == 'A' || c == 'E';
}

void in()
{
	for (int i = 2; i <= n - 1; i++)
	{
		if (!check(X[i - 1]) && check(X[i]) && !check(X[i + 1]))
		{
			return;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << X[i];
	}
	cout << el;
}

void Try(int i)
{
	for (char j = 'A'; j <= c; j++)
	{
		if (visited[j] == false)
		{
			X[i] = j;
			visited[j] = true;
			if (i == n)
			{
				in();
			}
			else
			{
				Try(i + 1);
			}
			visited[j] = false;
		}
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	cin >> c;
	memset(visited, false, sizeof(visited));
	n = c - 'A' + 1;
	Try(1);
}
