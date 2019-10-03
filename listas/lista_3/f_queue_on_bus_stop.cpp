#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  int a = 0, ans = 1;
  for (size_t i = 0; i < n; i++) {
    int group;
    cin >> group;
    if (a + group <= m) {
      a += group;
    } else {
      ans++;
      a = group;
    }
  }

  cout << ans << endl;
  return 0;
}
