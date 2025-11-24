#include "iostream"
#include "string"

using namespace std;

int main()
{
	int T;
	cin >> T;
	cin.ignore();
	while (T--)
	{
		string s;
		getline(cin, s);
		
		int n = s.size();
		int i = n - 1;
		
		while (i >= 0 && s[i] == '1')
		{
			i--;
		}
		
		if (i < 0)
		{
			for (int k = 0; k < n; k++)
			{
				cout << '0';
			}
			cout << endl;
			continue;
		}
		else
		{
			s[i] = '1';
			for (int j = i + 1; j < n; j++)
			{
				s[j] = '0';
			}
		}
		
		cout << s << endl;
	}
}
