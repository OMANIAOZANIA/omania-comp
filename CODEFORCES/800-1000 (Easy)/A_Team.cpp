#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, ans;

int main() {
    cin >> t;
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
        if (a+b+c >= 2) {
            ans++;
        }
    }
    cout << ans << nl;
}