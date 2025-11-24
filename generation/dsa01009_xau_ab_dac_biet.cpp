#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int n, k, a[1005];
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
    a[i] = 1;
    for (int j = i + 1; j <= n; j++)
    {
        a[j] = 0;
    }
}

bool check()
{
    int ans = 0, dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            dem++;
        }
        else
        {
            dem = 0;
        }
        if (dem > k)
        {
            return false;
        }
        if (dem == k)
        {
            ans++;
        }
    }
    return ans == 1;
}

int main()
{
    cin >> n >> k;
    ok = true;
    init();
    vector<string> res;
    while (ok)
    {
        if (check())
        {
            string ans = "";
            for (int i = 1; i <= n; i++)
            {
                ans += (a[i] ? "B" : "A");
            }
            res.push_back(ans);
        }
        next_binary();
    }

    cout << res.size() << endl;
    for (string x : res)
    {
        cout << x << endl;
    }
}