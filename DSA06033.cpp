#include <bits/stdc++.h>

using namespace std;

int task(vector<int> &a, int n)
{
	vector<int> aLeft(n), aRight(n);
	
	aLeft[0] = a[0];
	for (int i = 1; i < n; i++)
	{
		aLeft[i] = min(a[i], aLeft[i - 1]);
	}
	
	aRight[n - 1] = a[n - 1];
	for (int i = n - 2; i >= 0; i--)
	{
		aRight[i] = max(a[i], aRight[i + 1]);
	}
	
	int i = 0, j = 0, ans = - 1;
	while (i < n && j < n)
	{
		if (aLeft[i] < aRight[j])
		{
			ans = max(ans, j - i);
			j++;
		}
		else
		{
			i++;
		}
	}
	return ans;
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
    	vector<int> a(n);
    	for (int &x : a) cin >> x;
    	cout << task(a, n) << endl;
	}
    return 0;
}
