#include <iostream>
#include <vector>
#include <set>

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
		set<int> st;
		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			st.insert(tmp);
		}
		
		if (st.find(X) != st.end())
		{
			cout << "1\n";
		}
		else
		{
			cout << "-1\n";
		}
	}
	return 0;
}
