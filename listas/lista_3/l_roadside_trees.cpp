#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  const int eat = 1;
  const int jump = 1;
  long long n;
  cin >> n;
  vector<long long> h(n);
  for (size_t i = 0; i < n; i++) {
    cin >> h[i];
  }
  long long ans = -1;
  long long currentH = 0;
  for (const auto& v : h) {
    if(currentH > v)
      ans += currentH - v + jump;
    else
      ans += jump + v - currentH;
    currentH = v;
    ans += eat;
  }

  cout << ans << endl;
  return 0;
}
