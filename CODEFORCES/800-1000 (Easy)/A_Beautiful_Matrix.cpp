#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll a[10][10], ans;

int main() {
    for (int i=0;i<5;i++) {
        for (int j=0;j<5;j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                if (i!=2) {
                    ans+=abs(i-2);
                }
                if (j!=2) {
                    ans+=abs(j-2);
                }
            }
        }
    }
    cout << ans << nl;
}