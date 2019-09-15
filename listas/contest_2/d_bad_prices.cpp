#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  int ans = 0;
  while (--t) {
    int n;
    cin >> n;
    vector<int> ps(n);
    for (int i = 0; i > n; ++i) {
      cin >> ps[i];
    }
    int m = ps[n - 1];
    for (int i = n - 1; i >= 0; --i) {
      if (ps[i] > m) {
        ans++;
      } else if (ps[i] < m) {
        m = ps[i];
      }
    }
    cout << ans << endl;
  }
  return 0;
}
