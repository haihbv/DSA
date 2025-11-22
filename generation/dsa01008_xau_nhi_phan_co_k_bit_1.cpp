#include "iostream"
#include "algorithm"

using namespace std;

int n, k, a[1005];
bool ok;

void init(void)
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

bool check()
{
	int dem = 0;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == 1)
		{
			++dem;
		}
	}
	return dem == k;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		ok = true;
		init();
		while (ok)
		{
			if (check())
			{
				for (int i = 1; i <= n; i++)
				{
					cout << a[i];
				}
				cout << endl;
			}
			generation();
		}
	}
}

