#include <iostream>

using namespace std;

void Selection_Sort(int *a, int n)
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
		swap(a[i], a[min_pos]);
		cout << "Buoc " << i + 1 << ": ";
		for (int k = 0; k < n; k++)
		{
			cout << a[k] << (k == n - 1 ? '\n' : ' ');
		}
	}
}

void Interchange_Sort(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {
                swap(a[i], a[j]);
            }
        }
        cout << "Buoc " << i + 1 << ": ";
        for (int k = 0; k < n; k++)
        {
            cout << a[k] << (k == n - 1 ? '\n' : ' ');
        }
    }
}

int main()
{
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	Interchange_Sort(a, n);
	return 0;
}
