#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int &x : a)
	{
		cin >> x;
	}
	
	vector<vector<int>> vv;
	
	for (int i = 0; i < n - 1; i++)
	{
		int min_pos = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[min_pos] > a[j]) 
			{
				min_pos = j;
			}
		}
		int tmp = a[i];
		a[i] = a[min_pos];
		a[min_pos] = tmp;
		
		vv.push_back(a);
	}
	
	for (int i = vv.size() - 1; i >= 0; i--)
	{
		cout << "Buoc " << i + 1 << ": ";
		for (int x : vv[i]) cout << x << " ";
		cout << endl;
	}
	return 0;
}
