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
		multiset<int> st;
		for (int i = 0; i < n; i++)
		{
			int tmp;
			cin >> tmp;
			st.insert(tmp);
		}
		for (auto it : st)
		{
			cout << it << " ";
		}
		cout << endl;
	}
	return 0;
}
