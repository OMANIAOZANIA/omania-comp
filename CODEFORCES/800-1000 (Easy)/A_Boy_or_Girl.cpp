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
set<char> a;

int main() {
    char x;
    while (cin >> x) {
        a.insert(x);
    }
    if (a.size()%2==0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}