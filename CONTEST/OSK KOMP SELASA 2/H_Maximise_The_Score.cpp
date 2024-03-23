#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, n, a[10005], ans;

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        n*=2;
        ans = 0;

        for (int i=0;i<n;i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        for (int i=0;i<n;i+=2) {
            ans += a[i];
        }
        cout << ans << nl;
    }
}