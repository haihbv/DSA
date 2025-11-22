#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
#define el '\n'

using namespace std;

int n, x[105][105];
string s; 
vector<string> v;

void input()
{
	cin >> n;
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			cin >> x[i][j];
		}
	}
}

void Try(int i, int j)
{
	if (i == n && j == n)
	{
		v.push_back(s);
		return;
	}
	if (i + 1 <= n && x[i+1][j] == 1)
	{
		x[i+1][j] = 0;
		s += "D";
		Try(i + 1, j);
		s.pop_back();
		x[i+1][j] = 1;
	}
	
	if (j - 1 >= 1 && x[i][j-1] == 1)
	{
		x[i][j-1] = 0;
		s += "L";
		Try(i, j - 1);
		s.pop_back();
		x[i][j - 1] = 1;
	}
	
	if (j + 1 <= n && x[i][j+1] == 1)
	{
		x[i][j+1] = 0;
		s += "R";
		Try(i, j + 1);
		s.pop_back();
		x[i][j+1] = 1;
	}
	
	if (i - 1 >= 1 && x[i-1][j] == 1)
	{
		x[i-1][j] = 0;
		s += "U";
		Try(i - 1, j);
		s.pop_back();
		x[i-1][j] = 1;
	}
}
void solve()
{
	s.clear();
	v.clear();
	
	if (x[1][1] == 1 && x[n][n] == 1)
	{
		x[1][1] = 0;
		Try(1, 1);
		if (!v.empty())
		{
			sort(v.begin(), v.end());
			for (string x : v)
			{
				cout << x << " ";
			}
		}
		else
		{
			cout << -1;
		}
	}
	else 
	{
		cout << -1;
	}
	cout << el;
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc; cin >> tc;
	while (tc--)
	{
		input();
		solve();
	}
}

