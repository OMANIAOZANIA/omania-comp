#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll t, n, ans;

int main() {
    cin >> t;
    while (t--) {
        string s;
        ans=0;
        cin >> n >> s;
        for (int i=1;i<n;i++) {
            if (s[i-2]=='m'&&s[i-1]=='a'&&s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e')
                {ans--; continue;}

            if (s[i-1]=='m'&&s[i]=='a'&&s[i+1]=='p')
                ans++;
            else if (s[i-1]=='p'&&s[i]=='i'&&s[i+1]=='e')
                ans++;
        }
        cout << ans << nl;
    }
}