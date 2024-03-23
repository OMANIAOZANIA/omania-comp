#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

ll t, n;

int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		if (n<2 || n%2!=0) {
			cout << "NO" << endl;
			continue;
		}
	
		cout << "YES" << endl;
		bool x = false;
		for (int i=0;i<(n/2);i++) {
			x = not x;
			if (x) {
				cout << "AA";
			}
			else {
				cout << "BB";
			}
		}
		cout << endl;
	}
}
