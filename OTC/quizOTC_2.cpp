#include <bits/stdc++.h>
#define ll long long
#define vt vector
using namespace std;

ll n, m, a[105], b[105], ans;

int main() {
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	cin >> m;
	for (int i = 1; i <= m; i++) {
		cin >> b[i];
	}
	
	sort(a+1, a+1+n);
	sort(b+1, b+1+m);
	
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (abs(a[i]-b[j]) <= 1) {
				ans++;
				b[j] = -100;
				break;
			}
		}
	}
	cout << ans << endl;
}
