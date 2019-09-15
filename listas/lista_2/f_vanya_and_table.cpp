#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  long sum = 0;
  while (n--) {
    int x1 = 1, x2 = 1, y1 = 1, y2 = 1;
    cin >> x1 >> x2 >> y1 >> y2;
    sum += (x2 - x1 + 1) * (y2 - y1 + 1);
  }
  cout << sum << endl;
  return 0;
}
