#include <iostream>
#include <set>
#include <sstream>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string s;
		getline(cin >> ws, s);
		set<char> st;
		for (int i = 0; s[i] != '\0'; i++)
		{
			if (s[i] != ' ')
			{
				st.insert(s[i]);
			}
		}
		
		for (char x : st)
		{
			cout << x << " ";
		}
		cout << endl;
	}
}
