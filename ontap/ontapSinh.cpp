#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define el '\n'

int n, a[105];
ll f[98];
bool ok;

void ktao() {
	f[0] = 1; f[1] = 2;
	for (int i = 2; i <= 92; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
}

/****************************************************************************************
* SINH
* ---------------------------------------------------------------------------------------
* 1. Sinh theo thu tu tu dien
* 2. Xau co dung k bit 1, so bit 1 la so chan, so bit 1 la so nguyen to
* 3. Khong co 2 so 1 lien tiep, khong co chuoi con "101", bat dau bang 1 ket thuc = 0
* 4. Sinh xau doi xung (giam nua lan so sinh), xau nhi phan phai chua "01"
* ----------------------------------------------------------------------------------------
*****************************************************************************************/
// in theo thu tu chia het cho n
bool checkN(int dem, int n) {
	if (dem % n != 0) return false;
	return true; 
}
// in theo thu tu fibonacci
bool checkFibo(int n) {
	for (int i = 0; i <= 92; i++) {
		if (n == f[i])
		{
			return true;
		}
	}
	return false;
}
// in theo thu tu so nguyen to
bool checkPrime(int n) {
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) return false;
	}
	return true;
}

// thu tu k bit 1 chan
bool check_K_bit1_chan() {
	int dem = 0;
	for (int i = 1; i <= n; i++) {
		if (a[i] == 1) {
			++dem;
		}
	}
	if (dem % 2 == 1) {
		return false;
	}
	return true;
}

// khong chua chuoi con "100"
bool check100() {
    for (int i = 1; i <= n - 2; i++) {
        if (a[i] == 1 && a[i + 1] == 0 && a[i + 2] == 0) {
            return false;
        }
    }
    return true;
}

void next_binary() {
	int i = n;
	while (i >= 1 && a[i] == 1) {
		i--;
	}
	if (i == 0) ok = false;
	else {
		a[i] = 1;
		for (int j = i + 1; j <= n; j++) {
			a[j] = 0;
		}
	}
}


int main() {
	ktao();
	cin >> n;
	for (int i = 1; i <= n; i++) {
		a[i] = 0;
	}
	ok = true;
	int cnt = 1;
	while (ok) {
		if (check100()) {
			cout << cnt << ": ";
			for (int i = 1; i <= n; i++) {
				cout << a[i] << " ";
			}
			cout << el;	
		}
		next_binary();
		++cnt;
	}
}


