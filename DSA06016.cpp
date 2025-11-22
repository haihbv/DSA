#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--)
    {
    	int n, m;
    	cin >> n >> m;
    	ll maxA = -1e9, minB = 1e9;
    	
    	for (int i = 0; i < n; i++)
    	{
    		ll tmp;
    		cin >> tmp;
    		maxA = max(maxA, tmp);
		}
		
		for (int i = 0; i < m; i++)
		{
			ll tmp;
			cin >> tmp;
			minB = min(minB, tmp); 
		}
		
		cout << maxA * minB << endl;
	}
	return 0;
}
