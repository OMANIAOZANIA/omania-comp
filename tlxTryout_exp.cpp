#include <bits/stdc++.h>
#define nl endl
#define ll long long
using namespace std;

ll T, K[20005];

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	cin >> T;
	int bigK = 0;
	for (int i = 1; i <= T; i++) {
		cin >> K[i];
		if (K[i] > bigK) bigK = K[i];
	}
	
	int P[bigK+5];
	for (int i = 2; i*i <= bigK; i++) {
		for (j = i*i; j <= bigKl j += i) {
			
		}
	}
}
