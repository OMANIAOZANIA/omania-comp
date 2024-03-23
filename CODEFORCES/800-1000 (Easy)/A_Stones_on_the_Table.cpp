#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, n, ans;

int main() {
    cin >> n;
    char x, y;
    for (int i=0;i<n;i++) {
        cin >> x;
        if (i==0) y=x;
        
        if (x==y&&i>0) ans++;
        y=x;
    }
    cout << ans << nl;
}