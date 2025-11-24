#include "iostream"
#include <vector>
#include <queue>

using namespace std;

queue<int> q;

int main(void)
{	
	string s;
	
	int truy_van;
	cin >> truy_van;
	while (truy_van--)
	{
		cin >> s;
		if (s == "PUSH")
		{
			int x;
			cin >> x;
			q.push(x);
		}
		else if (s == "POP")
		{
			if (!q.empty())
			{
				q.pop();
			}
		}
		else if (s == "PRINTFRONT")
		{
			if (q.empty())
			{
				cout << "NONE\n";
			}
			else
			{
				cout << q.front() << endl;
			}
		}
	}
	return 0;
}

