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
char k[3+5][3+5];

int main() {
    cin >> t;
    while (t--) {
        for (int i=0;i<3;i++) {
            for (int j=0;j<3;j++) {
                cin >> k[i][j];
            }
        }

        for (int i=0;i<3;i++) {
            int a=0,b=0,c=0;
            for (int j=0;j<3;j++) {
                if (k[i][j] == 'A') a=1;
                if (k[i][j] == 'B') b=1;
                if (k[i][j] == 'C') c=1;
            }
            if (a>0 && b>0 && c<1) {
                cout << "C" << nl;
                break;
            }
            if (a<1 && b>0 && c>0) {
                cout << "A" << nl;
                break;
            }
            if (a>0 && b<1 && c>0) {
                cout << "B" << nl;
                break;
            }
        }
    }
}