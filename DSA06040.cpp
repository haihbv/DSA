#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; cin >> T;
    while (T--)
    {
    	int n1, n2, n3;
    	cin >> n1 >> n2 >> n3;
    	vector<ll> a(n1), b(n2), c(n3);
    	
    	for (ll &x : a) cin >> x;
    	for (ll &y : b) cin >> y;
    	for (ll &z : c) cin >> z;
    	
    	int i = 0, j = 0, k = 0;
    	vector<ll> res;
    	
    	while (i < n1 && j < n2 && k < n3)
    	{
    		if (a[i] == b[j] && b[j] == c[k])
    		{
    			res.push_back(a[i]);
    			i++, j++, k++;
			}
			else
			{
				ll mn = min({a[i], b[j], c[k]});
				if (a[i] == mn)
				{
					i++;	
				} 
				else if (b[j] == mn)
				{
					j++;
				}
				else
				{
					k++;
				}
			}
		}
		
		if (res.empty() == 1)
		{
			cout << -1;
		}
		else for (ll x : res) cout << x << ' ';
		cout << "\n";
	}
	return 0;
}
