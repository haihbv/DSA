#include <bits/stdc++.h>
using namespace std;

vector<string> v;
string ans[501];

int modString(const string &s, int n) {
    long long r = 0;
    for (char c : s) {
        r = (r * 10 + (c - '0')) % n;
    }
    return r;
}

void sinh() {
    queue<string> q;
    q.push("9");

    int need = 500;

    while (!q.empty() && need > 0) {
        string s = q.front(); q.pop();
        v.push_back(s);

        for (int i = 1; i <= 500; i++) {
            if (ans[i] == "" && modString(s, i) == 0) {
                ans[i] = s;
                need--;
                if (need == 0) break;
            }
        }

        q.push(s + "0");
        q.push(s + "9");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    sinh(); 

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << ans[n] << "\n";
    }
}
