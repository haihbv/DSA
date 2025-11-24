#include <bits/stdc++.h>

using namespace std;

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
    	vector<int> a(n);
    	for (int &x : a)
    		cin >> x;
    	map<int, int> mp;
    	for (int x : a) 
    		mp[x]++;
    	
    	int found = -1;
    	for (auto it : mp)
    	{
    		if (it.second > n / 2)
    		{
    			found = it.first;
    			continue;
			}
		}
		
		if (found != -1)
		{
			cout << found << endl;
		}
		else
		{
			cout << "NO\n";
		}
	}
	return 0;
}
