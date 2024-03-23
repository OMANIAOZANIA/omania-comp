#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

int R, C;
ll S[100005][100005];

void solve() {
	//cin >> R >> C;
	for (int i = 1; i <= 1; i++) {
		for (int j = 1; j <= 1; j++) {
			cout << ".";
		}
	}
	
	cout << S[1][1] << endl;
	
	// R = 1, C <= 2000
	int sum = 0;
	for (int i = C; i <= C; i++) {
		if (S[1][i] == 0) { sum = -1; break; }
		else sum++;
	}
	
	cout << sum << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}
