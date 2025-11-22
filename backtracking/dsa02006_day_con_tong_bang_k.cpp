#include "iostream"
#include "algorithm"

#define el '\n'

using namespace std;

int X[25], n, k, sum, a[25];
bool is_valid;

void input()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
}

void Try(int i, int pos)
{
    for (int j = pos; j <= n; j++)
    {
        X[i] = a[j];
        sum += a[j];
        if (sum == k)
        {
            is_valid = true;
            cout << "[";
            for (int l = 1; l <= i; l++)
            {
                cout << X[l];
                if (l != i)
                {
                    cout << " ";
                }
            }
            cout << "] ";
        }

        else if (sum < k)
        {
            Try(i + 1, j + 1);
        }
        sum -= a[j];
    }
}

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc;
    cin >> tc;
    while (tc--)
    {
        is_valid = false;
        input();
        Try(1, 1);
        if (!is_valid)
        {
            cout << -1;
        }
        cout << el;
    }
}
