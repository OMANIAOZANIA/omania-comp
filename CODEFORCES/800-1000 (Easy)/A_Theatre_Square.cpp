#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll n, m, a;

int main() {
    cin >> n >> m >> a;
    n = n/a + (n%a!=0);
    m = m/a + (m%a!=0);
    cout << n*m << nl;
}