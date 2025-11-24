#include <iostream>
#include <vector>
#include <map>

using namespace std;

using ll = long long;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n, k;
		cin >> n >> k;
		vector<int> a(n);
		for (int i = 0; i < n; i++) cin >> a[i];
		
		map<int, int> mp;
		long long count = 0;
		
		for (int x : a)
		{
			int need = k - x;
			if (mp[need] > 0)
			{
				count += mp[need];
			}
			mp[x]++;
		}
		cout << count << endl;
	}
	return 0;
}


