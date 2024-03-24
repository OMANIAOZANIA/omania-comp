#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll n;
string nama[1005];

int main() {
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> nama[i];

        int ans=1;
        for (int j=0;j<i;j++) {
            if (nama[j] < nama[i]) ans++;
        }
        cout << ans << nl;
    }
}