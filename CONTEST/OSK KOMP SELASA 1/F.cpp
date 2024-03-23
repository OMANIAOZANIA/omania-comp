#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll n, t, a[100005], cnt, ans;

int main() {
	cnt=0;ans=0;
	cin >> n >> t;
	for (int i=0;i<n;i++) {
		cin >> a[i];
	}

	for (int i=0;i<n;i++) {
		cnt += a[i];
		ans++;
		if (cnt >= t) {
			ans--;
		}
	}
	cout << ans << endl;
}
