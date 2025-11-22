#include "iostream"
#include "string"
#include "algorithm"

#define el '\n'

using namespace std;

string s;
bool is_check;

void generation()
{
	int i = s.size() - 2;
	while (i >= 0 && s[i] > s[i + 1])
	{
		i--;
	}
	if (i < 0)
	{
		is_check = false;
		return; 
	}
	else
	{
		int j = s.size() - 1;
		while (s[i] > s[j])
		{
			j--;
		}
		swap(s[i], s[j]);
		reverse(s.begin() + i + 1, s.end());
	}
}

void solve()
{
	is_check = true;
	while (is_check)
	{
		cout << s << " ";
		generation();
	}
	cout << el;
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	cin.ignore();
	while (tc--)
	{
		getline(cin, s);
		solve();
	}
}

