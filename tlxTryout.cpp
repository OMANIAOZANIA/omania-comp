#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	for (int i = 2; i < n; i++) {
		bool x = false;
		for (int j = 2; j*j <= i; j++) {
			if (j == i || j == 1) continue;
			if (i % j == 0) { x = true; break; }
		}
		if (not x) cout << i << endl;
	}
}
