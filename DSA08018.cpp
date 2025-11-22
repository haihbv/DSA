#include <bits/stdc++.h>

using namespace std;

int dem = 0;

vector<string> v;
queue<string> q;
void init();

int main()
{
	init();
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		for (string x : v)
		{
			if (x.length() > n)
			{
				break;
			}
			dem += 1;
		}
		cout << dem << endl;
		for (string x : v)
		{
			if (x.length() > n)
			{
				break;
			}
			cout << x << " ";
		}
		dem = 0;
		cout << endl;
	}
	return 0;
}

void init()
{
	q.push("6");
	q.push("8");
	v.push_back("6");
	v.push_back("8");
	
	while (1)
	{
		string top = q.front();
		q.pop();
		if (top.length() > 15)
		{
			break;
		}
		v.push_back(top + "6");
		v.push_back(top + "8");
		q.push(top + "6");
		q.push(top + "8");
	}
}

