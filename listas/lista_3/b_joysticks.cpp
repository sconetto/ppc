#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  int a1, a2;
  cin >> a1 >> a2;
  int mins = 0;
  while (a1 > 0 || a2 > 0) {
    if (a1 == 1 && a2 == 1)
      break;
    if (a1 > a2 || a2 == 1) {
      a2++;
      a1 -= 2;
      mins++;
    }
    else if (a2 >= a1 || a1 == 1) {
      a1++;
      a2 -= 2;
      mins++;
    }
    if (a1 == 0 || a2 == 0)
      break;
  }
  cout << mins << endl;
  return 0;
}
