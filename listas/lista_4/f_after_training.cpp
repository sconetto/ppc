#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  long n, m;
  cin >> n >> m;
  vector<long> ans(m, 0);
  for (size_t i = 0; i < m; i++) {
    ans[i] = 1 + (m - 1 + (((i + m) % 2) ? 1 : (-1)) * i) / 2;
  }
  for (size_t i = 0; i < n; i++) {
    cout << ans[i % m] << endl;
  }

  return 0;
}
