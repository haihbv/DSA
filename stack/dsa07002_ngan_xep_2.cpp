#include <bits/stdc++.h>

#define el '\n'

using namespace std;

stack<int> st;

int main()
{
    // cin.tie(0)->sync_with_stdio(0);
    int q;
    cin >> q;
    cin.ignore();
    
    for (int i = 1; i <= q; i++)
    {
    	string s;
    	cin >> s;
    	if (s == "PUSH")
    	{
    		int x;
    		cin >> x;
    		st.push(x);
		}
		else if (s == "POP")
		{
			if (!st.empty())
			{
				st.pop();
			}
		}
		else if (s == "PRINT")
		{
			if (st.empty())
			{
				cout << "NONE" << el;
			}
			else
			{
				cout << st.top() << el;
			}
		}
	}
}

