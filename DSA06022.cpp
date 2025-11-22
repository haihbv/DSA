#include <iostream>
#include <vector>

using namespace std;

#define MIN 1e18

using ll = long long;

void Solve_Test(void)
{
	int n;
	cin >> n;
	vector<ll> a(n);
	for (auto &x : a) cin >> x;
	
	ll min1 = MIN, min2 = MIN;
	
	for (int x : a)
	{
		if (x < min1)
		{
			min2 = min1;
			min1 = x;
		}
		else if (x > min1 && x < min2)
		{
			min2 = x;
		}
	}
	if (min2 == MIN) cout << -1 << endl;
	else cout << min1 << " " << min2 << endl;
}

int main(void)
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
	int T;
	cin >> T;
	while (T--)
	{
		Solve_Test();
	}
	return 0;
}
