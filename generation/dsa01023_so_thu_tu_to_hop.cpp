#include "iostream"
#include "algorithm"

using namespace std;

int n, k, a[1005], dem;
bool ok;

int to_hop(int n, int k)
{
    if (k > n)
        return 0;
    int res = 1;
    for (int i = 1; i <= k; i++)
    {
        res = res * (n - i + 1) / i;
    }
    return res;
}

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
        ktao();
        ok = false;
    }
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
        }
        ok = true;
        dem = 0;
        while (ok)
        {
            ++dem;
            sinh();
        }
        cout << to_hop(n, k) - dem + 1 << endl;
    }
}
