#include "iostream"
#include "vector"

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
        return;
    }
    else
    {
        a[i] = 1;
        for (int j = i + 1; j <= n; j++)
        {
            a[j] = 0;
        }
    }
}

void ma_gray()
{
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            cout << a[i];
        }
        else
        {
            if (a[i] == a[i - 1])
            {
                cout << "0";
            }
            else
            {
                cout << "1";
            }
        }
    }
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
            ma_gray();
            cout << " ";
            next_binary();
        }
        cout << endl;
    }
}
