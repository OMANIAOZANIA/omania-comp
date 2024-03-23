#include "bits/stdc++.h"

using namespace std;

#define ll long long
const int MAXN = 100100;

int t;
ll n, k;
ll a[MAXN];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  
  cin >> t;
  while (t--) {

    cin >> n >> k;
    for (int i = 0; i < n; i++)
      cin >> a[i];
  
    ll ans = 0;

    for (int i = 0; i < min(n, 40ll); i++) {
      ll cv = a[i];
      for (int j = 0; j <= i; j++)
        cv /= 2;
      ans += cv;
    }

    ll sf = 0;
    for (int i = 0; i < n; i++) {

      sf += a[i];
      sf -= k;

      ll nv = sf;

      for (int j = 1; j < 33 && i + j < n; j++) {
        ll cv = a[i + j];
        for (int x = 0; x < j; x++)
          cv /= 2;
        nv += cv;
      }

      ans = max(ans, nv);

    }

    cout << ans << "\n";

    

  }
  
}

// ~ BucketPotato
