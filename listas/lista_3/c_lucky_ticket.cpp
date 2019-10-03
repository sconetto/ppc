#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  string tck;
  cin >> tck;
  int f = 0, s = 0;
  int h1 = 0, h2 = 0;
  int half = n / 2;
  for (size_t i = 0; i < n; i++) {
    if (tck[i] - '0' == 4)
      f++;
    else if (tck[i] - '0' == 7)
      s++;
    if (i < half) {
      h1 += tck[i] - '0';
    } else if (i >= half) {
      h2 += tck[i] - '0';
    }

  }


  if (f + s != n)
    cout << "NO" << endl;
  else if (f + s == n && h1 == h2)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;
  return 0;
}
