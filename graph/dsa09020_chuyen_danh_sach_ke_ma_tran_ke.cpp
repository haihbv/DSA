#include "bits/stdc++.h"

using namespace std;

#define el '\n'

int a[1001][1001];

void xuly(int i, string s)
{
	stringstream ss(s);
	string tmp;
	while (ss >> tmp)
	{
		int j = stoi(tmp);
		a[i][j] = 1;
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int n; cin >> n;
	cin.ignore();
	for (int i = 1; i <= n; ++i)
	{
		string s;
		getline(cin, s);
		xuly(i, s);
	}
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << el;
	}
}

