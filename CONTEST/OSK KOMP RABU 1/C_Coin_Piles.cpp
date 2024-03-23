#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, a, b;

int main() {
    cin >> t;
    while (t--) {
        cin >> a >> b;
        if ((2*a) < b || (2*b) < a) {
            cout << "NO" << nl;
            continue;
        }

        a=a%3; b=b%3;
        if (a==2 && b==1 || a==1 && b==2 || a==0 && b==0) {
            cout << "YES" << nl;
            continue;
        } else cout << "NO" << nl;
    }
}