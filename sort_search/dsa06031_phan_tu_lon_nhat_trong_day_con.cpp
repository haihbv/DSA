#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; i++) cin >> a[i];
		multiset<int> ms;
		for (int i = 0; i < k; i++) {
			ms.insert(a[i]);
		}
		cout << *ms.rbegin() << " ";
		for (int i = k; i < n; i++) {
			ms.insert(a[i]); // them phan tu tiep theo
			auto it = ms.find(a[i - k]); // tim va xoa phan tu dau tien
			ms.erase(it);
			cout << *ms.rbegin() << " ";
		}
		cout << el;
	}
}
