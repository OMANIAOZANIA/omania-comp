#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, n, x[105], y[105];

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=0;i<n;i++) {
            cin >> x[i] >> y[i];
        }

        sort(x, x+n);
        sort(y, y+n);

        if (x[0] < 0 && x[n-1] > 0 && y[0] < 0 && y[n-1] > 0) {
            cout << "NO" << nl;
        }
        else cout << "YES" << nl;
    }
}