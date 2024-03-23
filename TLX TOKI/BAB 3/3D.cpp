#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll n, q, a[100005], b[100005];

int main() {
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    
    cin >> q;
    for (int i=0;i<q;i++) {
        // banyaknya bebek > X,
        // banyaknya bebek <= Y
        int x,y; cin >> x >> y;
        int l = 0;
        int r = n-1;
        while (l<=r) {
            int mid = (l+r)/2;

        }
    }

}