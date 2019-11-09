#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  string c, r;
  cin >> c  >> r;
  int left = c.find("|");
  int right = c.size() - 1 - left;

  int diff = abs(left - right);
  if (diff > r.size() || (r.size() - diff) % 2 != 0)
    cout << "Impossible" << endl;
  else {
    int rleft = (r.size() - diff) / 2;
    if (left < right)
      rleft += diff;

    for (size_t i = 0; i < left; i++)
      cout << c[i];
    for (size_t i = 0; i < rleft; i++)
      cout << r[i];
    cout << "|";
    for (size_t i = left + 1; i < c.size(); i++)
      cout << c[i];
    for (size_t i = rleft; i < r.size(); i++)
      cout << r[i];
  }
  cout << endl;

  return 0;
}
