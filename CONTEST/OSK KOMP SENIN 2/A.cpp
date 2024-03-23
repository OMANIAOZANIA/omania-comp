#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

ll t;

int main() {
	cin >> t;
	while (t--) {
		int a=0,b=0;
		for (int i=0;i<5;i++) {
			char x;
			cin >> x;
			if (x == 'A') a++;
			else b++;
		}
		
		if (a>b) cout << "A" << endl;
		else cout << "B" << endl;
	}
}
