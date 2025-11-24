#include "iostream"
#include "algorithm"

using namespace std;

int n, a[10005];
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

bool check_thuan_nghich()
{
    int l = 1, r = n;
    while (l <= r)
    {
        if (a[l] != a[r])
        {
            return false;
        }
        ++l;
        --r;
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
        if (check_thuan_nghich())
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        generation();
    }
}
