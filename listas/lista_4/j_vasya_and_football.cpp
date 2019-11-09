#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  int n;
  string home, away;
  cin >> home >> away >> n;
  set<int> hy;
  set<int> ay;
  vector<pair<string, pair<int, int>>> ans;

  for (size_t i = 0; i < n; i++) {
    int t, m;
    char team, color;
    cin >> t >> team >> m >> color;
    if (team == 'h') {
      if (color == 'y') {
        if (hy.count(m) != 0) {
          ans.push_back(make_pair(home, make_pair(m, t)));
        } else {
          hy.insert(m);
        }
      } else {
        ans.push_back(make_pair(home, make_pair(m, t)));
      }
    } else {
      if (color == 'y') {
        if (ay.count(m) != 0) {
          ans.push_back(make_pair(away, make_pair(m, t)));
        } else {
          ay.insert(m);
        }
      } else {
        ans.push_back(make_pair(away, make_pair(m, t)));
      }
    }
  }

  if (ans.size() > 0) {
    for (const auto& v : ans) {
      cout << v.first << " " <<  v.second.first << " " << v.second.second << endl;
    }
  }

  return 0;
}
