#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll n, m, a[100005];

int main() {
    cin >> n >> m;

    a[0] = 1;
    ll cnt=0;
    for (int i=1;i<=m;i++) {
        cin >> a[i];
        if (a[i] >= a[i-1]) {
            cnt += a[i]-a[i-1];
        }
        else {
            cnt += n-a[i-1]+a[i];
        }
    }
    cout << cnt << nl;
}