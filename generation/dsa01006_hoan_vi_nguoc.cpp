#include "iostream"
#include "algorithm"

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int a[n + 1];
		for (int i = 1; i <= n; i++)
		{
			a[i] = n - i + 1;
		}
		do
		{
			for (int i = 1; i <= n; i++)
			{
				cout << a[i];
			}
			cout << " ";
		} while (prev_permutation(a + 1, a + n + 1));
		cout << endl;
	}
}

