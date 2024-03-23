#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, n, p[100005];

int main() {
    int cnt=1;
    bool prima;
    for (int i=2;cnt<100000;i++) {
        prima=1;
        for (int j=2;j<=sqrt(i);j++) {
            if (i%j == 0) {
                prima=0;
                break;
            }
        }
        if (prima==0) continue;
        p[cnt] = i;
        cnt++;
    }

    cin >> t;
    while (t--) {
        cin >> n;
        cout << p[n] << nl;
    }
}