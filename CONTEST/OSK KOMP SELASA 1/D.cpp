#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, n, k, a[200005], ans;

int main() {
	cin >> t;
	while (t--) {
		cin >> n >> k;
		ans = n;
		for (int i=0;i<n;i++) {
			char x;
			cin >> x;
			
			a[i+1] = a[i];
			if (x == 'W') {
				a[i+1]++;
			}
		}
		//dbg(a[1],a[2],a[3],a[4],a[5]);

		for (int i=0;i<=n-k;i++) {
			ans = min(ans, a[i+k]-a[i]);
		}
		cout << ans << endl;
	}
}
