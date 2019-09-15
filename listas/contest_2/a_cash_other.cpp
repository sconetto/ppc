#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  int ans = 1, cont = 1;
  int h, m, lasth, lastm;

  cin >> n;
  cin >> lasth >> lastm;

  n--;

  while(n--) {
    cin >> h >> m;
    if (h == lasth && m == lastm) {
      cont++;
    } else {
      ans = max(ans, cont);
      cont = 1;
    }
    lasth = h;
    lastm = m;
  }
  ans = max(ans, cont);
  cout << ans << endl;
  return 0;
}
