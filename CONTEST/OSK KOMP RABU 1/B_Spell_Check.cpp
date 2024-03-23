#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

ll z, n;
string s;

int main() {
    cin >> z;
    while (z--) {
        cin >> n;
        if (n!=5) {
            cout << "NO" << nl;
            continue;
        }
        
        int T=0,I=0,M=0,U=0,R=0;
        for (int j=0;j<n;j++) {
            char x;
            cin >> x;

            if (x=='T') {
                T++;
            }
            else if (x=='i') {
                I++;
            }
            else if (x=='m') {
                M++;
            }
            else if (x=='u') {
                U++;
            }
            else if (x=='r') {
                R++;
            }
        }

        if (T==1&&I==1&&M==1&&U==1&&R==1)
            cout << "YES" << nl;
        else cout << "NO" << nl;
    }
}