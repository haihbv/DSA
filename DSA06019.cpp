#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

map<int, int> mp;

bool comp(int a, int b)
{
	if (mp[a] != mp[b])
	{
		return mp[a] > mp[b];
	}
	return a < b;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> v;
		mp.clear();
		
		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			v.push_back(tmp);
			mp[v[i]]++;
		}
		
		sort(v.begin(), v.end(), comp);
		
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << (i == v.size() - 1 ? '\n' : ' ');
		}
	}
	return 0;
}
