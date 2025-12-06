#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n, a[100005];

vector<int> res;
bool used[100005];

void solve(int a[], int n) {
	queue<int> q;
	for (int i = 0; i < n; i++) {
		q.push(a[i]); 
	}
	int d[10] = {0};
	while (!q.empty()) {
		int x = q.front(); q.pop();
		int y = 0;
		for (int i = 0; i < n; i++) {
			if (x == a[i]) {
				y == i;
				break;
			}
		}
		used[x] = true;
		for (int i = 0; i < n; i++) {
			if (!used[a[i]]) {
				q.push(x * 10 + a[i]);
			}
		}
		
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio();
	int tc = 1;
	cin >> tc;
	while (tc--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		
	}
}
