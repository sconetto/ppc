#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  long long n, m;
  cin >> n >> m;
  long long ans(0);
  if (n == 1)
    cout << 1 << endl;
  else {
    if (n / 2 >= m) {
      ans = m + 1;
    } else if (n / 2 < m) {
      ans = m - 1;
    }
    cout << ans << endl;
  }
  return 0;
}
