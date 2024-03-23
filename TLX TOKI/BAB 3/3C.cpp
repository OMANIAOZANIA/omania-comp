#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll n, q;
pair<string,string> c[100005];

int main() {
    cin >> n >> q;
    for (int i=0;i<n;i++) {
        cin >> c[i].first >> c[i].second;
    }
    
    for (int i=0;i<q;i++) {
        string x; cin >> x;
        int l = 0;
        int r = n-1;
        string ans;
        while (l<=r) {
            int mid = (l+r)/2;
            if (c[mid].first < x) {
                l = mid+1;
            }
            else if (c[mid].first > x) {
                r = mid-1;
            }
            else {
                ans = c[mid].second;
                break;
            }
        }
        if (ans.empty()) cout << "NIHIL" << nl;
        else cout << ans << nl;
    }
}