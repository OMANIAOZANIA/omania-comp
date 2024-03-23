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
    int prevAns;
    for (int i=0;i<n;i++) {
        cin >> nama[i];
        if (i==0) {
            cout << 1 << nl;
            continue;
        }
        prevAns=0;
        int x=i;
        while(x-- && nama[i]>nama[x]) {
            prevAns++;
        }
        cout << prevAns+1 << nl;
    }
}