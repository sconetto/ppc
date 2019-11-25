#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  long long n, x;
  cin >> n >> x;
  vector<long long> c(n, 0);
  for (size_t i = 0; i < n; i++) {
    cin >> c[i];
  }
  sort(c.begin(), c.end());
  long long ans(0);
  for (size_t i = 0; i < n; i++) {
    long long aux = c[i] * x;
    ans += aux;
    if (x > 1)
      x--;
  }
  cout << ans << endl;
  return 0;
}
