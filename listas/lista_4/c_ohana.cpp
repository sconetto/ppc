#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<string> rows;
  set<string> only;
  for (size_t i = 0; i < n; i++) {
    string aux;
    cin >> aux;
    rows.push_back(aux);
    only.insert(aux);
  }
  auto ans = 0;
  for (const auto& v : only) {
    auto c = count(rows.begin(), rows.end(), v);
    ans = (c >= ans) ? c : ans;
  }
  cout << ans << endl;
  return 0;
}
