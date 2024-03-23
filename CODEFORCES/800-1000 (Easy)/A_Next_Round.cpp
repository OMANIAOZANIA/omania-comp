#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll n, k, a[55], ans;

int main() {
    cin >> n >> k;
    ans = 0;
    int mx = 0;
    for (int i=0;i<n;i++) {
        cin >> a[i];
        if (i==k-1) mx = a[i];
    }
    for (int i=0;i<n;i++) {
        if (a[i] >= mx && a[i] > 0) ans++;
    }
    cout << ans << nl;
}