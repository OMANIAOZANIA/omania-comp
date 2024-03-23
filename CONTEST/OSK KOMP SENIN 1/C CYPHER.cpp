#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

ll t, n, a[105];

int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i=0;i<n;i++) {
			cin >> a[i];
		}
		
		for (int i=0;i<n;i++) {
			int x;
			cin >> x;
			for (int j=0;j<x;j++) {
				char s;
				cin >> s;
				
				if (s == 'D') {
					a[i]++;
					if (a[i] > 9) a[i] = 0;
				}
				else if (s == 'U') {
					a[i]--;
					if (a[i] < 0) a[i] = 9;
				}
			}
		}
		
		for (int i=0;i<n;i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
