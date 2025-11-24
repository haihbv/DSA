#include "iostream"
#include "algorithm"
#include "set"

using namespace std;

int n, k, x[1005];
bool ok;
set<int> se;

void init()
{
    for (int i = 1; i <= k; i++)
    {
        x[i] = i;
    }
}

bool generation()
{
    int i = k;
    while (i >= 1 && x[i] == n - k + i)
    {
        i--;
    }
    if (i < 1)
    {
        return false;
    }
    else
    {
        x[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            x[j] = x[j - 1] + 1;
        }
    }
    return true;
}

void in()
{
    int cnt = 0;
    for (int i = 1; i <= k; i++)
    {
        if (se.count(x[i]) == 1)
        {
            cnt++;
        }
    }
    cout << k - cnt << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        ok = true;
        se.clear();
        for (int i = 1; i <= k; i++)
        {
            cin >> x[i];
            se.insert(x[i]);
        }
        if (generation())
        {
            in();
        }
        else
        {
            cout << k << endl;
        }
    }
}