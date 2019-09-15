#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int r1, r2, c1, c2, d1, d2;
  cin >> r1 >> r2;
  cin >> c1 >> c2;
  cin >> d1 >> d2;
  set<int> sol;
  int x = ((r1 + c1 - d2)) % 2 == 0 ? ((r1 + c1 - d2) / 2) : -1 ;
  int y = ((r1 + c2 - d1)) % 2 == 0 ? ((r1 + c2 - d1) / 2) : -1 ;
  int z = ((r2 + c1 - d1)) % 2 == 0 ? ((r2 + c1 - d1) / 2) : -1 ;
  int w = ((r2 + c2 - d2)) % 2 == 0 ? ((r2 + c2 - d2) / 2) : -1 ;
  sol.insert(x);
  sol.insert(y);
  sol.insert(z);
  sol.insert(w);
  if (sol.size() < 4 || (x < 1 || x > 9) || (y < 1 || y > 9) || (z < 1 || z > 9) || (w < 1 || w > 9)) {
    cout << "-1\n";
  } else {
    cout << x << " " << y << endl << z << " " << w << endl;
  }
  return 0;
}
