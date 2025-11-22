#include <iostream>

using namespace std;

static int cnt = 0;

int sx(int a[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min_pos = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[j] < a[min_pos])
			{
				min_pos = j;
			}
		}
		if (min_pos != i)
		{
			int tmp = a[min_pos];
			a[min_pos] = a[i];
			a[i] = tmp;
			++cnt;
		}
	}
	return cnt;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n];
		for (int &x : a)
		{
			cin >> x;
		}
		cout << sx(a, n) << endl;
		cnt = 0;
	}
	return 0;
}
