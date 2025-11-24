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

void next_binary()
{
    int i = n;
    while (i >= 1 && a[i] == 1)
    {
        i--;
    }
    if (i < 1)
    {
        ok = false;
    }
    a[i] = 1;
    for (int j = i + 1; j <= n; j++)
    {
        a[j] = 0;
    }
}

bool check()
{
    if (a[1] != 1 || a[n] != 0)
    {
        return false;
    }
    for (int i = 1; i <= n - 1; i++)
    {
        if (a[i] == 1 && a[i + 1] == 1)
        {
            return false;
        }
    }

    int dem6 = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            dem6++;
            if (dem6 > 3)
            {
                return false;
            }
        }
        else
        {
            dem6 = 0;
        }
    }

    return true;
}

int main()
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
                cout << (a[i] == 0 ? '6' : '8');
            }
            cout << endl;
        }
        next_binary();
    }
}
