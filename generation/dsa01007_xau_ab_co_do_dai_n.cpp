#include "iostream"

using namespace std;

int n, a[1005];
bool ok;

void init()
{
	for (int i = 1; i <= n; i++)
	{
		a[i] = 0;
	}
}

void generation()
{
	int i = n;
	while (i >= 1 && a[i] == 1)
	{
		i--;
	}
	if (i < 1)
	{
		ok = false;
	}
	a[i] = 1;
	for (int j = i + 1; j <= n; j++)
	{
		a[j] = 0;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		init();
		ok = true;
		while (ok)
		{
			for (int i = 1; i <= n; i++)
			{
				if (a[i] == 0)
				{
					cout << "A";
				}
				else
				{
					cout << "B";
				}
			}
			cout << " ";
			generation();
		}
		cout << endl;
	}
}

