#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, n;

int main() {
    cin >> n;
    for (int i=0;i<=n;i++) {
        for (int j=0;j<=n;j++) {
            for (int k=0;k<=n;k++) {
                if (i+j+k <= n)
                    cout << i << " " << j << " " << k << nl;
            }
        }
    }
}