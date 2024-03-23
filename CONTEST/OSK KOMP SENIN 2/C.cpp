#include <bits/stdc++.h>
#define ll long long
#define vt vector
#define nl endl
using namespace std;

ll t, n, a[200005];
string s;

int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		pair<char,int> freq[26+5];
		
		for (int i=0;i<n;i++) {
			cin >> a[i];
		}
		
		for (int i=0;i<n;i++) {
			for (int j=0;j<26;j++) {
				char kar = (j+'a');
				if (freq[j].second == a[i]) {
					freq[j].second++;
					freq[j].first = kar;
					cout << freq[j].first;
					break;
				}
			}
		}
		cout << endl;
	}
}
