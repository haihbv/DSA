#include "iostream"
#include "algorithm"

using namespace std;

int n, a[1005];
bool ok;

void init()
{
    for (int i = 1; i <= n; i++)
    {
        a[i] = 0;
    }
}

void generation()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        i--;
    }
    if (i < 1)
    {
        ok = false;
        return;
    }
    a[i] = 1;
    for (int j = i + 1; j <= n; j++)
    {
        a[j] = 0;
    }
}

// 0 - A
// 1 - H
bool check()
{
    if (a[1] != 1 || a[n] != 0)
    {
        return false;
    }
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == 1 && a[i - 1] == 1)
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ok = true;
        init();
        while (ok)
        {
            if (check())
            {
                for (int i = 1; i <= n; i++)
                {
                    cout << (a[i] == 1 ? 'H' : 'A');
                }
                cout << endl;
            }
            generation();
        }
    }
}
