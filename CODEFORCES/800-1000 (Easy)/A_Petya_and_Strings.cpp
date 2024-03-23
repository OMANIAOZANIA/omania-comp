#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, n;
string s1, s2;

int main() {
    cin >> s1 >> s2;
    for (int i=0;i<s1.length();i++) {
        if (s1[i]>=65&&s1[i]<=96) {
            s1[i]+=32;
        }
    }
    for (int i=0;i<s2.length();i++) {
        if (s2[i]>=65&&s2[i]<=96) {
            s2[i]+=32;
        }
    }

    if (s1>s2) cout << 1 << nl;
    else if (s1<s2) cout << -1 << nl;
    else  cout << 0 << nl;
}