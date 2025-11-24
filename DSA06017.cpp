#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<long long> v;
        v.reserve(n + m);
        
        for (int i = 0; i < n; i++)
        {
        	int x;
        	cin >> x;
        	v.push_back(x);
		}
		
		for (int i = 0; i < m; i++)
		{
			int x;
			cin >> x;
			v.push_back(x);
		}
		
		sort(v.begin(), v.end());
		
		for (long long it : v)
		{
			cout << it << " ";
		}
		cout << endl;
    }
    return 0;
}

