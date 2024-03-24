#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll n, q, a[100005], ans;

int main() {
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> a[i];
    }
    sort(a, a+n);

    cin >> q;
    for (int i=0;i<q;i++) {
        // BANYAK BEBEK (> X) DAN (<= Y)
        // X < BEBEB <= Y

        int x,y;
        cin >> x >> y;

        int l = 0;
        int r = n-1;
        int ansX=n, ansY=n;

        while (l <= r) { // cari yang > X
            int mid = (l+r)/2;
            if (a[mid] <= x) {
                l = mid+1;
            }
            else if (a[mid] > x) {
                r = mid-1;
                ansX = mid;
            }
        }
        
        l = 0;
        r = n-1;
        while (l <= r) { // cari yang <= y
            int mid = (l+r)/2;
            if (a[mid] <= y) {
                l = mid+1;
            }
            else if (a[mid] > y) {
                r = mid-1;
                ansY = mid;
            }
        }
        
        cout << ansY-ansX << nl;
    }
}