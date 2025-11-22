#include "iostream"
#include "algorithm"
#include "set"
#include "vector"

using namespace std;

int n, m, k, a[25];
bool ok;

void sinh()
{
    int i = k;
    while (i >= 1 && a[i] == m - k + i)
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
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main()
{
    cin >> n >> k;
    set<int> se;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        se.insert(x);
    }

    vector<int> v(se.begin(), se.end());
    m = v.size();
    if (m < k)
    {
        return 0;
    }

    for (int i = 1; i <= k; i++)
    {
        a[i] = i;
    }

    ok = true;
    while (ok)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << v[a[i] - 1] << " ";
        }
        cout << endl;
        sinh();
    }
}