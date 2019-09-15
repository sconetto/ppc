#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int ans = 0;
  for(const auto& i : a) {
    if (ans < i) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
