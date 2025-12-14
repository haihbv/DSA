#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, X[105];
string y;
bool visited[105];
vector<string> b;

void ql(int i) {
	for (int j = 1; j <= n; j++) {
		if (!visited[j]) {
			X[i] = j;
			visited[j] = true;
			if (i == n) {
				for (int u = 1; u <= n; u++) {
					cout << b[X[u] - 1] << " ";
				}
				cout << y << el;
			}
			else ql(i + 1);
			visited[j] = false;
		}
	}
}

int main() {
	cin >> n;
	set<string> se;
	for (int i = 1; i <= n; i++) {
		string x;
		cin >> x;
		se.insert(x);
	}
	cin >> y;
	
	vector<string> a;
	
	for (string x : se) {
		a.push_back(x);
	}
	
	for (string x : a) {
		if (x != y) b.push_back(x);
	}
	
	n = b.size();
	
	ql(1);
}

