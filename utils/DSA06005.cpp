#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) 
	{
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;

        map<int, int> mp1, mp2;
        for (auto it : a) 
		{
            mp1[it] = 1;
            mp2[it] = 1;
        }
        for (auto it : b) 
		{
            mp1[it] = 1;
            if (mp2[it] == 1) 
			{
                mp2[it] = 2;
            }
        }

        for (auto it : mp1) 
		{
            cout << it.first << " ";
        }
        cout << endl;

        for (auto it : mp2) 
		{
            if (it.second == 2) 
			{
                cout << it.first << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

