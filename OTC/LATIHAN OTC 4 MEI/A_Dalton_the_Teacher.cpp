#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, n, a[100005];

int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i=0;i<n;i++) {
            cin >> a[i];
        }
        
        int x=0;
        for (int i=0;i<n;i++) {
            if (a[i] == i+1) x++;
        }

        if (x%2 == 0) cout << x/2 << nl;
        else cout << x/2 + 1 << nl;

    }
}