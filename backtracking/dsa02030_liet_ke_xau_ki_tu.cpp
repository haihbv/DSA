#include "bits/stdc++.h"

using namespace std;

#define el '\n'

int n, k, X[105];

void in()
{
	for (int i = 1; i <= k; i++)
	{
		cout << (char)(X[i] + 'A' - 1);
	}
	cout << el;
}

void ql(int i)
{
	for (int j = X[i - 1]; j <= n; j++)
	{
		X[i] = j;
		if (i == k)
		{
			in();
		}
		else
		{
			ql(i + 1);
		}
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	char c;
	cin >> c;
	n = c - 'A' + 1;
	cin >> k;
	X[0] = 1;
	ql(1);
}

