#include "iostream"
#include "string"

using namespace std;

string s;

void solve_gray()
{
    for (int i = 0; i < s.size(); i++)
    {
        if (i == 0)
        {
            cout << s[0];
        }
        else
        {
            if (s[i] == s[i - 1])
            {
                cout << '0';
            }
            else
            {
                cout << '1';
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        getline(cin, s);
        solve_gray();
        cout << endl;
    }
}
