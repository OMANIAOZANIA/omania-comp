#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t;
string s;

int main() {
    cin >> t;
    while (t--) {
        cin >> s;
        int ans=0;
        string x = "codeforces";

        for (int i=0;i<10;i++) {
            if (s[i]!=x[i]) {
                ans++;
            }
        }
        cout << ans << nl;
    }
}