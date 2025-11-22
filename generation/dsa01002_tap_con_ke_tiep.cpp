#include "iostream"
#include "string"

using namespace std;

int n, k, a[1005];
bool ok;

void ktao()
{
	for (int i = 0; i < k; i++)
	{
		a[i] = i + 1;
	}
}

void sinh()
{
	int i = k - 1;
	while (i >= 0 && a[i] == n - k + i + 1)
	{
		i--;
	}
	if (i < 0)
	{
		return ktao();
	}
	a[i]++;
	for (int j = i + 1; j < k; j++)
	{
		a[j] = a[j - 1] + 1;
	}
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n >> k;
		// ktao();
		for (int i = 0; i < k; i++)
		{	
			cin >> a[i];
		}
		sinh();
		for (int i = 0; i < k; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
}

