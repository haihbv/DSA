#include "iostream"
#include "algorithm"

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1005], b[1005];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    // ktao b
    for (int i = 1; i <= n; i++)
    {
        b[i] = i;
    }

    do
    {
        for (int i = 1; i <= n; i++)
        {
            cout << a[b[i]] << " ";
        }
        cout << endl;
    } while (next_permutation(b + 1, b + n + 1));
}
