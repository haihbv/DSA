#include "iostream"

#define el '\n'

using namespace std;

int n, X[105], col[105], cheo_xuoi[105], cheo_nguoc[105], cnt;

void Try(int i)
{
	for (int j = 1; j <= n; j++)
	{
		if (col[j] == 0 && cheo_xuoi[n+i-j] == 0 && cheo_nguoc[i+j-1] == 0)
		{
			X[i] = j;
			col[j] = 1;
			cheo_xuoi[n+i-j]=1;
			cheo_nguoc[i+j-1] = 1;
			if (i==n)
			{
				++cnt;
			}
			else
			{
				Try(i + 1);
			}
			col[j] = 0;
			cheo_xuoi[n+i-j]=0;
			cheo_nguoc[i+j-1] = 0;
		}
	}
}

int main()
{
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--)
	{
		cnt = 0;
		cin >> n;
		Try(1);
		cout << cnt << el;	
	}
}
