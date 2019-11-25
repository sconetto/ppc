#include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, m;
  string s;
  cin >> n >> m;
  cin >> s;
  vector<pair<int, char>> qrs;
  for (size_t i = 0; i < m; i++) {
    int x;
    char c;
    cin >> x >> c;
    qrs.push_back(make_pair(x, c));
  }

  for (size_t i = 0; i < m; i++) {
    s[qrs[i].first - 1] = qrs[i].second;
    auto man = s;
    size_t f;
    int ops(0);
    while (man.find("..") != string::npos) {
      f = man.find("..");
      man.replace(f, 2, ".");
      ops++;
    }
    cout << ops << endl;
  }
  return 0;
}
