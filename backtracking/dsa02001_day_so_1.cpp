#include "iostream"
#define el '\n'

using namespace std;

int n, X[20];

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
	cout << "[";
	for (int j = 1; j <= i; j++)
	{
		cout << X[j];
		if (j == i)
		{
			cout << "]";
		}
		else
		{
			cout << " ";
		}
	}
	cout << el;
	
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

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--)
	{
		nhap();
		Try(n);
	}
}

