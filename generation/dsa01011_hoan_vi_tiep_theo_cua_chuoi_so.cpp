#include <bits/stdc++.h>

using namespace std;

int stt; 
string s;
bool ok;

void sinh() {
	int i = s.length() - 2;
	
	// tim s[i] < s[i+1]
	while (i >= 0 && s[i] >= s[i + 1]) {
		i--;
	}
	if (i < 0) {
		ok = false;
	}
	else
	{
		int j = s.length() - 1;
		while (s[j] <= s[i]) j--;
		swap(s[i], s[j]);
		reverse(s.begin() + i + 1, s.end());
	}
}

int main() {
	cin.tie(0) -> sync_with_stdio(0);
	int tc;
	cin >> tc;
	while (tc--) {
		ok = true;
		cin >> stt >> s;
		cout << stt << " ";
		sinh();
		if (ok) {
			cout << s << endl;
		}
		else {
			cout << "BIGGEST" << endl;
		}
		
	}
}

