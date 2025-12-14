#include <bits/stdc++.h>

using namespace std;

#define el '\n'

//2150k = 2*1000 + 150k;
//150k = 0*500 + 150k
//150k = 0*200 + 150k;
//150k = 1*100 + 50k
//50k = 1*50k + 0k

int doitien[] = {1000, 500, 200, 100, 50, 20, 10, 5, 2, 1};

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int cnt = 0, idx = 0;
		while (n) {
			cnt += n / doitien[idx];
			n %= doitien[idx];
			idx++;
		}
		cout << cnt << el;
	}
}

