#include <bits/stdc++.h>

#define el '\n'

using namespace std;

int priotiry(char c)
{
	if (c == '*' || c == '/') return 2;
	if (c == '-' || c == '+') return 1;
}

bool isCheck(string s)
{
	
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	cin.ignore();
	while (tc--)
	{
		string s;
		cin >> s;
		if (isCheck(s)) {
			cout << "YES";
		} else cout << "NO";
		cout << el; 	
	}
}

