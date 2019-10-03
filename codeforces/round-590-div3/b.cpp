#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  int n, k;
  cin >> n >> k;
  vector<long long> display(k, 0);
  for (size_t i = 0; i < n; i++) {
    long long messagei;
    cin >> messagei;
    if(!count(display.begin(), display.end(), messagei)) {
      if (display.size() == k) {
        display.pop_back();
        display.insert(display.begin(), messagei);
      } else
        display.insert(display.begin(), messagei);
    }
  }
  for (auto i = display.begin(); i != display.end(); ++i) {
    if (*i == 0) {
      display.erase(i);
      i--;
    }
  }
  for (const auto& v : display)
    cout << v << (v == display.back() ? "\n" : " ");
  return 0;
}
