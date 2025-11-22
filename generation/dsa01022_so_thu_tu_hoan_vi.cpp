#include "iostream"
#include "algorithm"

using namespace std;

int giai_thua(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    int gt = 1;
    for (int i = 2; i <= n; i++)
    {
        gt = gt * i;
    }
    return gt;
}

int dem;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        dem = 0;
        int n;
        cin >> n;
        int a[n + 1];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        do
        {
            ++dem;
        } while (next_permutation(a + 1, a + n + 1));
        cout << giai_thua(n) - dem + 1 << endl;
    }
}
