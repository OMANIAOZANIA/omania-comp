#include <bits/stdc++.h>
#define nl endl
#define ll long long
using namespace std;

ll N, ans;
pair<int, int> exam[5005];

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> exam[i].first >> exam[i].second;
	}
	
	sort(exam[0], exam[5005]);
	
	for (int i = 0; i < N; i++) {
		if (ans <= exam[i].second) {
			ans = exam[i].second;
		}
		else {
			ans = exam[i].first;
		}
	}
	cout << ans << nl;
}
