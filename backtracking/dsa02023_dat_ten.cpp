#include <bits/stdc++.h>
#define el '\n'

using namespace std;

int n, k, X[105];
bool ok;
string s;
set<string> se;
vector<string> v;

void ktao()
{
	for (int i = 1; i <= k; i++)
	{
		X[i] = i;
	}
}

void sinh()
{
	int i = k;
	int m = v.size();
	while (i >= 1 && X[i] == m - k + i)
	{
		i--;
	}
	if (i < 1)
	{
		ok = false;
		return;
	}
	X[i]++;
	for (int j = i + 1; j <= k; j++)
	{
		X[j] = X[j - 1] + 1;
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	cin >> n >> k;
	cin.ignore();
	getline(cin, s);
	stringstream ss(s);
	string tmp;
	while (ss >> tmp)
	{
		se.insert(tmp);
	}
	
	for (string x : se)
	{
		v.push_back(x);
	}

	ok = true;	
	ktao();
	while (ok)
	{
		for (int i = 1; i <= k; i++)
		{
			cout << v[X[i] - 1] << " ";
		}
		cout << endl;
		sinh();
	}
}

