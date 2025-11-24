#include <iostream>
#include <set>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		set<int> st;
		int ans = -1e9, res = 1e9;
		for (int i = 0; i < n; i++)
		{
			int x;
			cin >> x;
			if (x > ans)
			{
				ans = x;
			}
			if (x < res)
			{
				res = x;
			}
			st.insert(x);
		}
		cout << (ans - res + 1) - st.size() << endl;
		
	}
}
