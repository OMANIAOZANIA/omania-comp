#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll n, ans=1;

int main() {
    cin >> n;
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        ans = lcm(x, ans);
    }
    cout << ans << nl;
}