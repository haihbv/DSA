#include "iostream"
#include "string"
#include "vector"
#define el '\n'

using namespace std;

int n, X[105];
vector<vector<int>> res;

void nhap(void)
{
	cin >> n;
	X[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> X[i];
	}
}

void Try(int i)
{
	vector<int> path;
	path.clear();
	for (int j = 1; j <= i; j++)
	{
		path.push_back(X[j]);
	}
	res.push_back(path);
	
	for (int j = 1; j < i; j++)
	{
		X[j] = X[j] + X[j + 1];
	}
	if (i == 1)
	{
		return;
	}
	else
	{
		Try(i - 1);
	}
}

void solve()
{
	res.clear();
	Try(n);
	for (int i = res.size() - 1; i >= 0; i--)
	{
		cout << "[";
		for (int j = 0; j <= res[i].size() - 1; j++)
		{
			cout << res[i][j];
			if (j != res[i].size() - 1)
			{
				cout << " ";
			}
		}
		cout << "] ";
	}
	cout << el;
}

signed main(void)
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--)
	{
		nhap();
		solve();
	}
}

