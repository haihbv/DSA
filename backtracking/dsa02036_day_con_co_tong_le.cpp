#include "bits/stdc++.h"

using namespace std;

#define el '\n'

int n, a[105], X[105];

vector<vector<int>> res;

//X[2] = a[2] = 3;
//X[3] = a[1] = 2;

void quay_lui(int i, int pos, int sum) {
	for (int j = pos; j <= n; j++) {
		if ((a[j] < X[i - 1]))
		{
			X[i] = a[j];
			if ((sum + a[j]) % 2 == 1)
			{
				vector<int> tmp;
				for (int u = 1; u <= i; u++)
				{
					tmp.push_back(X[u]);
				}
				res.push_back(tmp);
			}
			quay_lui(i + 1, j + 1, sum + a[j]);
		}
	}
}

void inkq()
{
	sort(res.begin(), res.end());
	for (int i = 0; i < res.size(); i++)
	{
		for (int j = 0; j < res[i].size(); j++)
		{
			cout << res[i][j] << " ";
		}
		cout << el;
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc; cin >> tc;
	while (tc--)
	{
		cin >> n;
		X[0] = INT_MAX;
		res.clear();
		for (int i = 1; i <= n; i++) cin >> a[i];
		sort(a + 1, a + n + 1, greater<int>());
		quay_lui(1, 1, 0);
		inkq();
	}
}

