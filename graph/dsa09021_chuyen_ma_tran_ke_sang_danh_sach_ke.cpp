#include "bits/stdc++.h"

using namespace std;

#define el '\n'
 
signed main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			int x; cin >> x;
			if (x) cout << j << ' ';
		}
		cout << el;
	}
	return 0;
}

