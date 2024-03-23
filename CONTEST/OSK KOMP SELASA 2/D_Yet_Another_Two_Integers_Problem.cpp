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
        int ans = 0;
        
        if (a==b) {
            cout << 0 << nl;
            continue;
        }
        if (a>b) {
            while (a!=b) {
                ans++;
                if (a-b>10) {
                    ans += ((a-b)/10)-1;
                    a -= ((a-b)/10)*10;
                }
                else a -= (a-b);
            }
        }
        else {
            while (a!=b) {
                ans++;
                if (b-a>10) {
                    ans += ((b-a)/10)-1;
                    a += ((b-a)/10)*10;
                }
                else a += (b-a);
            }
        }
        cout << ans << nl; 
    }
}