#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    int sum = 0;
    vector<string> res;
    int b[n + 1];
    for (int i = 1; i <= n; i++)
    {
        b[i] = i;
    }
    do
    {
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            sum += a[i][b[i]];
        }
        if (sum == k)
        {
            string ans = "";
            for (int i = 1; i <= n; i++)
            {
                ans += to_string(b[i]); // luu cac hoan vi cot
                ans += " ";
            }
            res.push_back(ans);
        }
    } while (next_permutation(b + 1, b + n + 1));

    cout << res.size() << endl;
    for (string s : res)
    {
        cout << s << endl;
    }
}
