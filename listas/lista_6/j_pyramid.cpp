#include <bits/stdc++.h>
#include <numeric>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, t;
  cin >> n >> t;
  vector<vector<double>> g(n + 1, vector<double>(n + 1, 0));
  g[0][0] = t;
  int ans(0);
  for (size_t level = 0; level < n; level++) {
    for (size_t col = 0; col <= level; col++) {
      if (g[level][col] < 1.0)
        continue;
      ++ans;
      double rest = g[level][col] - 1;
      g[level + 1][col] += rest / 2;
      g[level + 1][col + 1] += rest / 2;
    }
  }

  cout << ans << endl;
  return 0;
}
