#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int t;
	cin >> t;
	while (t--)
	{
		int n, X;
		cin >> n >> X;
		unordered_map<int, int> mp;
		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			mp[tmp]++;
		}
		
		if (mp.find(X) == mp.end())
		{
			cout << "-1\n";
		}
		else
		{
			cout << mp[X] << "\n";
		}
	}
	return 0;
}
