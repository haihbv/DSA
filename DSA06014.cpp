#include <iostream>
#include <vector>

using namespace std;

const int MAXN = 1000000;

vector<bool> isPrime(MAXN + 1, true);

void sieve()
{
	isPrime[0] = isPrime[1] = false;
	
	for (int i = 2; i * i <= MAXN; i++)
	{
		if (isPrime[i])
		{
			for (int j = i * i; j <= MAXN; j += i)
			{
				isPrime[j] = false;
			}
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    sieve();
    
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		bool found = false;
		for (int i = 2; i <= n / 2; i++)
		{
			if (isPrime[i] && isPrime[n - i])
			{
				cout << i << " " << n - i << "\n";
				found = true;
				break;
			}
		}
		if (!found)
		{
			cout << "-1\n";
		}
	}
	return 0;
}



