#include <bits/stdc++.h>

using namespace std;

#define el '\n'

string ngay[] = {"02", "20", "22"};
string nam[] = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};

string x[4];

void ql(int i) {
	if (i == 1) {
		for (int j = 0; j < 3; j++) {
			x[i] = ngay[j];
			ql(i + 1);
		}
	}
	else if (i == 2) {
		x[i] = "02";
		ql(i + 1);	
	} else {
		for (int j = 0; j < 8; j++) {
			x[i] = nam[j];
			cout << x[1] << "/" << x[2] << "/" << x[3] << "\n";
		}
	}	
}     

int main() {
	ql(1);
}

