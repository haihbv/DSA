#include "bits/stdc++.h"

using namespace std;

#define el '\n'

int n, X[105], a[105];
vector<string> res;

void backtrack(int index, int start)
{
	for (int j = start; j <= n; j++)
	{
		if (a[j] > X[index - 1])
		{
			X[index] = a[j];
			if (index >= 2)
			{
				string ans = "";
				for (int u = 1; u <= index; u++)
				{
					ans += to_string(X[u]) + " ";
				}
				res.push_back(ans);
			}
			backtrack(index + 1, j + 1); 
		}
	}
}

int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> a[i];
	X[0] = 0;
	backtrack(1, 1);
	sort(res.begin(), res.end());
	for (string x : res)
	{
		cout << x << el;
	}
}

