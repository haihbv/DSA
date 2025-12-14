#include <bits/stdc++.h>

using namespace std;

#define el '\n'

int n;
vector<string> v;
bool used[15];
int min_cnt;

int count(string s1, string s2) {
	int i = 0, j = 0, cnt = 0;
	while (i < s1.size() && j < s2.size()) {
		if (s1[i] == s2[j]) {
			cnt++;
			i++;
			j++;
		}else if (s1[i] < s2[j]) {
			i++;
		} else j++;
	}
	return cnt;
}
void ql(int i, int last, int cur_cnt) {
    if (cur_cnt >= min_cnt) return;

    if (i == n) {           
        min_cnt = min(min_cnt, cur_cnt);
        return;
    }

    for (int j = 0; j < n; j++) {
        if (!used[j]) {
            used[j] = true;

            int k;
            if (last == -1) k = 0;
            else k = count(v[last], v[j]);

            ql(i + 1, j, cur_cnt + k);
            used[j] = false;
        }
    }
}


int main() {
	cin.tie(0) -> sync_with_stdio(0);
	cin >> n;
	memset(used, false, sizeof(used));
	min_cnt = INT_MAX;
	v.resize(n);
    for (int i = 0; i < n; i++) cin >> v[i];
	ql(0, -1, 0);
	cout << min_cnt << el;
}

