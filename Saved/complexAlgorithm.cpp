#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int x = 1, y = n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i * j == n) {
				if (abs(x - y) > abs(i - j)) {
					x = i, y = j;
				}
			}
		}
	}
	
	cout << x << " " << y << endl;
}
