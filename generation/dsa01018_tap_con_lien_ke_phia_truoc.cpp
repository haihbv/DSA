#include "iostream"

using namespace std;

int n, k, x[1005];
bool ok;

bool prev_combination()
{
    x[0] = 0;
    int i = k;
    while (i >= 1 && x[i] == x[i - 1] + 1)
    {
        i--;
    }
    if (i < 1)
    {
        return false;
    }
    x[i]--;
    for (int j = i + 1; j <= k; j++)
    {
        x[j] = n - (k - j);
    }
    return true;
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
            cin >> x[i];
        }
        if (prev_combination() == false)
        {
            for (int i = 1; i <= k; i++)
            {
                cout << n - k + i << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 1; i <= k; i++)
            {
                cout << x[i] << " ";
            }
            cout << endl;
        }
    }
}