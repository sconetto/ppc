#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  int n, d, m;
  cin >> n >> d;
  vector<int> a(n);
  int sum = 0;
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  cin >> m;
  if (m > n) {
    for (size_t i = 0; i < n; i++) {
      sum += a[i];
    }
    sum = sum - (d * (m - n));
  } else if (m < n) {
    sum = 0;
    for (int i = 0; i < m; i++) {
      sum += a[i];
    }
  } else {
    for (size_t i = 0; i < n; i++) {
      sum += a[i];
    }
  }
  cout << sum << endl;
  return 0;
}
