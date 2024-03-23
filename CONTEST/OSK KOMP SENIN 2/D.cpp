#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

ll t, n, q, a[150005], x[150005];
ll l, r, mid, ans;
string s;

int main() {
	cin >> t;
	while (t--) {
		cin >> n >> q;
		for (int i=1;i<=n;i++) {
			cin >> a[i];
		}
		for (int i=1;i<=q;i++) {
			cin >> x[i];
		}
		
		sort(a+1, a+1+n, greater<int>());
		for (int i=i;i<=n;i++) {
			a[i] = a[i-1]+a[i];
		}
		
		for (int i=1;i<=q;i++) {
			l = 1;
			r = n;
			while (l <= r) {
				mid = (l+r)/2;
				if (a[mid] < q[i]) {
					
				}
				else if (a[mid] > q[i]) {
					
				}
				else {
					
					break;
				}
			}	
		}
	}
}
