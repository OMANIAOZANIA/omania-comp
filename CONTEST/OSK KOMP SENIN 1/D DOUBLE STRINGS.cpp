#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

ll t, n;
set<string> a;
string s[100005];

int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i=0;i<n;i++) {
			cin >> s[i];
		}
		
		for (int i=0;i<n;i++) {
			for (int j=0;i<n;i++) {
				a.insert(s[i].append(s[j]));
			}
		}
		
		for (string x:a) {
			cout << x << endl;
		}
		cout << endl;
	}
}
