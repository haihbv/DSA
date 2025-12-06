#include <bits/stdc++.h>

#define el '\n'

void left_smaller(int a[], int n, int L[])
{
	std::stack<int> st;
	for (int i = n - 1; i >= 0; i--) {
		while (!st.empty() && a[st.top()] > a[i]) {
			L[st.top()] = i; st.pop();
		}
		st.push(i);
	}
	while (!st.empty()) {
		L[st.top()] = -1; st.pop();
	}	
}

void right_smaller(int a[], int n, int R[])
{
	std::stack<int> st;
	for (int i = 0; i < n; i++) {
		while (!st.empty() && a[st.top()] > a[i]) {
			R[st.top()] = i; st.pop();
		}
		st.push(i);
	}
	while (!st.empty()) {
		R[st.top()] = n; st.pop();
	}	
}

int main()
{
	std::cin.tie(0) -> sync_with_stdio(0);
	int tc = 1;
	std::cin >> tc;
	while (tc--) 
	{
		int n;
		std::cin >> n;
		int a[n], L[n], R[n];
		for (int &x : a) std::cin >> x;
		left_smaller(a, n, L);
		right_smaller(a, n, R);
		for (int i = 0; i < n; i++)
		{
			std::cout << L[i] << " ";
		}
		std::cout << std::endl;
		for (int i = 0; i < n; i++)
		{
			std::cout << R[i] << " "; 
		}
		std::cout << el;
//		long long res = 0;
//		for (int i = 0; i < n; i++)
//		{
//			int w = R[i] - L[i] - 1;
//			res = fmax(res, 1ll * a[i] * w);	
//		}
//		std::cout << res << el;
	}
}

