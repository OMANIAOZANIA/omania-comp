#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, n, k, a[300005];

int main() {
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i=0;i<n;i++) {
            cin >> a[i];
        }

        vector<pair<int, int>> h;
        for (int i=0;i<n;i++) {
            int x = a[i] % k;
            if (x == 0) x += k;
            h.push_back(make_pair(x*-1, i));
        }

        sort(h.begin(), h.end());
        for (auto ans:h) cout << ans.second+1 << " ";
        cout << nl;
    }
}