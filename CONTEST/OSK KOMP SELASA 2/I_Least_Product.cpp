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
    cin >> t;
    while (t--) {
        cin >> n;
        int neg=0;
        int zero=0;

        for (int i=1;i<=n;i++) {
            int x;
            cin >> x;
            if (x == 0) zero++;
            if (x < 0) neg++;
        }

        if (zero > 0) {
            cout << 0 << nl;
            continue;
        }
        if (n == 1 && neg == 0) {
            cout << 1 << nl;
            cout << 1 << " " << 0 << nl;
            continue;
        }

        if (neg%2==0 && neg > 0) { // negatif genap
            cout << 1 << nl;
            cout << 1 << " " << 0 << nl;
            continue;
        }

        if (neg == 0) {
            cout << 1 << nl;
            cout << 1 << " " << 0 << nl;
            continue;
        }

        cout << 0 << nl;
    }
}