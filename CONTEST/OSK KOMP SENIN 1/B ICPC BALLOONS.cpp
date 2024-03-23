#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

ll t, n;

int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		set<char> a;
		
		for (int i=0;i<n;i++) {
			char x;
			cin >> x;
			a.insert(x);
		}
		
		cout << n+a.size() << endl;
	}
}
