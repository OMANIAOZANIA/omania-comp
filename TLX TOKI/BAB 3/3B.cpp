#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, n, m, k, a[105][105];

int main() {
    cin >> n >> m >> k;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            cin >> a[i][j];
        }
    }
    vector<pair<int,int>> ketemu;
    for (int i=1;i<=n;i++) {
        for (int j=1;j<=m;j++) {
            int x=1;
            if (a[i-1][j]) x*=a[i-1][j];
            if (a[i+1][j]) x*=a[i+1][j];
            if (a[i][j-1]) x*=a[i][j-1];
            if (a[i][j+1]) x*=a[i][j+1];
            if (x==k) {
                ketemu.push_back(make_pair(j, i));
            }
        }
    }
    sort(ketemu.begin(), ketemu.end());
    if (ketemu.size() < 1) cout << "0 0" << nl;
    else cout << ketemu[0].second << " " << ketemu[0].first << nl;
}