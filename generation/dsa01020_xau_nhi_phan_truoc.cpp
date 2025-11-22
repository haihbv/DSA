#include "iostream"
#include "algorithm"

using namespace std;

void generate(string &s)
{
    int n = s.size();
    int i = n - 1;
    while (i >= 0 && s[i] == '0')
    {
        i--;
    }

    if (i < 0)
    {
        for (int j = 0; j < n; j++)
            s[j] = '1';
        return;
    }

    s[i] = '0';
    for (int j = i + 1; j < n; j++)
    {
        s[j] = '1';
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin, s);
        generate(s);
        cout << s << endl;
    }
}
