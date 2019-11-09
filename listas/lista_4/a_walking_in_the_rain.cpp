#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  long n;
  cin >> n;
  vector<long> tiles(n + 1);
  long ans = 0;
  for (size_t i = 1; i <= n; i++) {
    cin >> tiles[i];
  }

  ans = min(tiles[1], tiles[tiles.size()]);

  for (size_t i = 1; i <= n; i++) {

  }


  cout << ans << endl;
  return 0;
}
