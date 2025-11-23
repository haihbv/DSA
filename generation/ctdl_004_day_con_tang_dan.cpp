#include "bits/stdc++.h"

#define el '\n'

using namespace std;

int n, k, X[105], a[105];
int dem;

//X[1] = a[1] = 2;
//X[2] = a[2...n] = 5;

void ql(int i, int pos)
{
	if (i > k) return;
	for (int j = pos; j <= n; j++)
	{
		if (a[j] > X[i - 1])
		{
			X[i] = a[j];
			if (i == k)
			{
				dem++;
			}
			ql(i + 1, j + 1);
		}
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	cin >> n >> k;
	dem = 0; a[0] = -1;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	ql(1, 1);
	cout << dem << el;
	return 0;
}

