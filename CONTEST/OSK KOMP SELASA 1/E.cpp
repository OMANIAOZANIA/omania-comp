#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, n, x, a[200005];
ll l, r, mid;

int main() {
	cin >> t;
	while (t--) {
		cin >> n >> x;
		
		int highest=0;
		for (int i=0;i<n;i++) {
			cin >> a[i];
			if (a[i]>highest) highest = a[i];
		}
		sort(a,a+n);

		int l = 0;
		int r = (n-1);
		while (l <= r) {
			mid = (l+r)/2;
			
		}
	}
}