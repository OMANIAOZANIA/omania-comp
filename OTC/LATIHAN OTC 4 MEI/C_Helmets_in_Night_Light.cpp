#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, n, p;
pair<ll, ll> a[100005];

int min(int a, int b) {
    if (a>b) return b;
    else return a;
}

int main() {
    cin >> t;
    while (t--) {
        cin >> n >> p;
        for (int i=0;i<n;i++) {
            cin >> a[i].second;
        }
        for (int i=0;i<n;i++) {
            int x; cin >> x;
            a[i].first = min(x, p);
        }
        sort(a, a+n);

        int cnt=p,siz=n-1;
        for (int i=0;i<n;i++) {
            cnt += (a[i].first * min(a[i].second, siz));
            siz -= min(siz, a[i].second);
        }
        cout << cnt << nl;
    }
}