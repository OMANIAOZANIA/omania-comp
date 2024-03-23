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
        if (n%2==0) {
            cout << (n/2)-1 << nl;
            continue;
        }
        cout << n/2 << nl;
    }
}