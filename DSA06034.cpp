#include <iostream>
#include <algorithm>

using namespace std;

using ll = long long;

ll DSA06034(ll a[], ll l, ll r, ll val)
{
	ll *it1 = lower_bound(a + l, a + r, val);
	ll *it2 = upper_bound(a + l, a + r, val);
	return it2 - it1;
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int T;
	cin >> T;
	while (T--)
	{
		int n; ll k;
		cin >> n >> k;
		ll a[n];
		for (ll &x : a) cin >> x;
		
		sort(a, a + n);
		
		ll ans = 0;
		
		for (int i = 0; i < n - 1; i++)
		{
			ll need = k - a[i];
			ans += DSA06034(a, i + 1, n, need);	
		}
		cout << ans << endl;	
	}	
}
