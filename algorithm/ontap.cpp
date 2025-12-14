#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll f[100];

void ktao() {
	f[0] = 0;
	f[1] = 1;
	for (int i = 2; i <= 98; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
}

int main ()
{	
	ktao();
	for (int i = 0; i <= 92; i++) {
		cout << f[i] << endl;
	}
	return 0;
}

