#include "iostream"
#include "string"

using namespace std;

string s;

void solve_gray()
{
    string res = "";
    res += s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            if (res[i - 1] == '0')
            {
                res += '1';
            }
            else if (res[i - 1] == '1')
            {
                res += '0';
            }
        }
        else
        {
            res += res[i - 1];
        }
    }
    cout << res << endl;
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
    }
}
