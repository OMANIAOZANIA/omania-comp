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
string s, a="";

bool isVowel(char x) {
    char v[6+5] = {'a','i','u','e','o','y'};
    for (int i=0;i<6;i++) {
        if (x==v[i]) return 1;
    }
    return 0;
}

int main() {
    cin >> s;
    
    for (int i=0;i<s.length();i++) {
        if (s[i]>=65&&s[i]<=96) {
            s[i]+=32;
        }
        if (not isVowel(s[i])) {
            a += ".";
            a += s[i];
        }
    }

    cout << a;
}