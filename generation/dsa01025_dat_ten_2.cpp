#include "iostream"
#include "algorithm"

using namespace std;

int n, k, a[1005];
bool ok;

void ktao()
{
    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }
}

void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i < 1)
    {
        ok = false;
    }
    a[i]++;
    for (int j = i + 1; j <= k; j++)
    {
        a[j] = a[j - 1] + 1;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ok = true;
        ktao();
        while (ok)
        {
            for (int i = 1; i <= k; i++)
            {
                cout << (char)(a[i] + 64);
            }
            cout << endl;
            sinh();
        }
    }
}
