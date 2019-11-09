#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  long n, m;
  cin >> n >> m;
  long ans = 0;
  for (size_t i = 1; i <= n; i++) {
    for (size_t j = 1; j <= m; j++) {
      if ((i + j) % 5 == 0)
        ++ans;
    }
  }

  cout << ans << endl;

  return 0;
}
