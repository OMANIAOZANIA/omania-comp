#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, k, w, n, a[1005];

int main() {
    cin >> k >> n >> w;
    int x=0;
    for (int i=1;i<=w;i++) {
        x += k*i;
    }
    if (x<n) cout << 0 << nl;
    else cout << x-n << nl;
}