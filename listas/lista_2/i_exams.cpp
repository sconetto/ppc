#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n, k;
  cin >> n >> k;
  auto res = (k > 3 * n) ? 0 : 3 * n - k;
  cout << res << endl;
  return 0;
}
