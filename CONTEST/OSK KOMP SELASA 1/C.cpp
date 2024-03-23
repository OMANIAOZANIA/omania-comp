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
pair<int,int> a[200005];

int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i=0;i<n;i++) {
			cin >> a[i].first;
		}
		for (int i=0;i<n;i++) {
			cin >> a[i].second;
		}

		sort(a, a+n);
		
		for (int i=0;i<n;i++) {
			cout << a[i].first << " ";
		}
		cout << endl;
		for (int i=0;i<n;i++) {
			cout << a[i].second << " ";
		}
		cout << endl;
	}
}
