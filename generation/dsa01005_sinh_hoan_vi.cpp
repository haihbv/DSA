#include "iostream"
#include "algorithm"

using namespace std;

int a[1005];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            a[i] = i;
        }
        do
        {
            for (int i = 1; i <= n; i++)
            {
                cout << a[i];
            }
            cout << " ";
        } while (next_permutation(a + 1, a + n + 1));
        cout << endl;
    }
}