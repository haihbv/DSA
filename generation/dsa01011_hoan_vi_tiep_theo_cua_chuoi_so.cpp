#include "iostream"
#include "string"
#include "algorithm"

using namespace std;

bool sinh_xau_hoan_vi(string &s)
{
    int i = s.size() - 2;
    while (i >= 0 && s[i] >= s[i + 1])
    {
        i--;
    }
    if (i < 0)
    {
        return false;
    }
    else
    {
        int j = s.size() - 1;
        while (s[i] >= s[j])
        {
            j--;
        }
        swap(s[i], s[j]);
        reverse(s.begin() + i + 1, s.end());
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int order;
        string s;
        cin >> order >> s;
        cout << order << " ";
        if (sinh_xau_hoan_vi(s))
        {
            cout << s << endl;
        }
        else
        {
            cout << "BIGGEST" << endl;
        }
    }
}
