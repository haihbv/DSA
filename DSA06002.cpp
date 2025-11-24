#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;


int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, X;
		cin >> n >> X;
		vector<int> a(n);
		for (int &x : a)
		{
			cin >> x;
		}
		
		stable_sort(a.begin(), a.end(), [X](int a, int b)
		{
			return abs(a - X) < abs(b - X);
		});
		
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << (i == n - 1 ? '\n' : ' ');
		}
	}
}
