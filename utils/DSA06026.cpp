#include <iostream>
using namespace std;

void Bubble_Sort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                swapped = true;
            }
        }
        if (swapped) 
        {
            cout << "Buoc " << i + 1 << ": ";
            for (int k = 0; k < n; k++)
            {
            	cout << a[k] << (k == n - 1 ? '\n' : ' ');
			}
        }
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    Bubble_Sort(a, n);
    return 0;
}

