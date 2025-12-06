#include <bits/stdc++.h>
using namespace std;

#define el '\n'

long long solve(string s, int k) {
	
	priority_queue<int> pq;
	
    int d[256] = {0};

    for (char c : s) d[c]++;
	
    for (int i = 0; i < 256; i++) {
		if (d[i] > 0) pq.push(d[i]);
	}
	
	//while (!pq.empty()) {
	//	int x = pq.top(); pq.pop();
	//	cout << x << " ";
	//}
	
	long long res = 0;
	while (k-- > 0 && !pq.empty())
	{
		int x = pq.top(); 
		pq.pop();
		if (x - 1 > 0) pq.push(x - 1);
	}
	while (!pq.empty()) {
		long long u = pq.top(); pq.pop();
		res += 1ll * (u * u);
	}
	return res;
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
    int t;
    cin >> t;
    while (t--) {
		int k;
        cin >> k;
		string s;
		cin >> s;
        cout << solve(s, k) << el;
    }
}
