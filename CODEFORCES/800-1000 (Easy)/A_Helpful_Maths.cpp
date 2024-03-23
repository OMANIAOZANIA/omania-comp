#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, n, a[105];

int main() {
    int cnt=0;
    char plus;
    while (cin >> a[cnt]) {
        if (a[cnt] != 43) cnt++;
    }
    sort(a, a+cnt);
    for (int i=0;i<cnt;i++) {
        cout << a[i];
        if (i<cnt-1) cout << "+";
    }
}