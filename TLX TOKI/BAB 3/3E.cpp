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
pair<int, string> nama[505];

int main() {
    cin >> n;
    for (int i=0;i<n;i++) {
        string x;
        cin >> x;
        nama[i].first = x.length();
        nama[i].second = x;
    }
    sort(nama, nama+n);
    for (int i=0;i<n;i++) {
        cout << nama[i].second << nl;
    }
}