#include <bits/stdc++.h>
using namespace std;

int bil[1001];
int main() {
	int n; cin >> n;
	int mode = 1;
	
	// batas input: 1 <= N <= 1000
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		bil[x]++;
	}
	
	for (int i = 2; i <= 1000; i++) {
		if (bil[i] >= bil[mode]) {
			mode = i;
		}
	}
	cout << mode << endl;
}
