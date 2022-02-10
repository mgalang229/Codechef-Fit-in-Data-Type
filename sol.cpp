#include <bits/stdc++.h>
 
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, x;
		cin >> n >> x;
		// add 1 to n before taking the remainder of x and n
		cout << x % (n + 1) << '\n';
	}
	return 0;
}
