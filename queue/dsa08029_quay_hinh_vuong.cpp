#include "bits/stdc++.h"

using namespace std;

#define el '\n'

string s, t;

string xoay_trai(string s)
{
	string res = s;
	res[0] = s[3];
	res[1] = s[0];
	res[3] = s[4];
	res[4] = s[1];
	return res;
}

string xoay_phai(string s)
{
	string res = s;
	res[1] = s[4];
	res[2] = s[1];
	res[4] = s[5];
	res[5] = s[2];
	return res;
}

int bfs() {
	queue<pair<string, int>> q;
	q.push({s, 0});
	set<string> se;  
	while (!q.empty()) {
		auto it = q.front(); q.pop();
		string u = it.first; int len = it.second;
		string t1 = xoay_trai(u);
		string t2 = xoay_phai(u);
		
		if (u == t) return len;
		
		if (!se.count(t1)) {
			q.push({t1, len + 1});
			se.insert(t1);
		}
		
		if (!se.count(t2)) {
			q.push({t2, len + 1});
			se.insert(t2);
		}
	}
	return -1;
}

string xau_ktao(string s) {
	string tmp = "";
	for (int i = 0; i < s.length(); i++) {
		if (s[i] != ' ') tmp += s[i];
	}
	return tmp;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	cin >> tc;
	cin.ignore();
	while (tc--) {
		getline(cin, s);
		getline(cin, t);
		s = xau_ktao(s);
		t = xau_ktao(t);
		cout << bfs() << el;
	}
}

