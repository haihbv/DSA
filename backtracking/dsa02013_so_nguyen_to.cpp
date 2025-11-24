#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, p, s, X[105];

vector<int> prime;
vector<vector<int>> res;

bool nt(int n)
{
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}

void ktao()
{
	for (int i = 2; i <= 200; i++)
	{
		if (nt(i)) prime.push_back(i);
	}
}

void ql(int i, int pos, int sum)
{
	if (i > n) return;
	for (int j = pos; j <= prime.size(); j++)
	{
		if(sum + prime[j] > s) break; 
		X[i] = prime[j];
		if (sum + prime[j] == s && i == n)
		{
			vector<int> tmp;
			for (int u = 1; u <= i; u++)
			{
				tmp.push_back(X[u]);
			}
			res.push_back(tmp);
		}
		if (sum + prime[j] < s) ql(i + 1, j + 1, sum + prime[j]);
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	ktao();
	int tc = 1;
	cin >> tc;
	while (tc--)
	{
		cin >> n >> p >> s;
		res.clear();
		
		int start = upper_bound(prime.begin(), prime.end(), p) - prime.begin();
		ql(1, start, 0);
		cout << res.size() << el;
		for (vector<int> x : res)
		{
			for (int y : x)
			{
				cout << y << " ";
			}
			cout << el;
		}
	}
	
}

