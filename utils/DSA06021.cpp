#include <bits/stdc++.h>

using namespace std;

int Binary_Search(int a[], int n, int x)
{
	int l = 0, r = n - 1;
	while (l <= r)
	{
		int mid = (l + r) / 2;
		if (a[mid] == x)
		{
			return mid + 1;
		}
		
		if (a[l] <= a[mid])
		{
			if (a[l] <= x && x <= a[mid])
			{
				r = mid - 1;
			}
			else
			{
				l = mid + 1;
			}
		}
		else
		{
			if (a[mid] < x && x <= a[r])
			{
				l = mid + 1;
			}
			else
			{
				r = mid - 1;
			}
		}
	}
	return -1;
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--)
    {
    	int n, X;
    	cin >> n >> X;
    	int a[n];
    	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++) cin >> a[i];
    	
    	cout << Binary_Search(a, n, X) << "\n";
	}
	return 0;
}
