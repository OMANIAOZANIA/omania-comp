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
        for (int i=0;i<8;i++) {
            for (int j=0;j<8;j++) {
                char x;
                cin >> x;
                if (x!='.') cout << x;
            }
        }
        cout << nl;
    }
}