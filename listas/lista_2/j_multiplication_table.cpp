#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  long long n, x;
  cin >> n >> x;
  long cont = 0;
  for (size_t i = 1; i <= sqrt(x) && i <= n; i++) {
    if ((x % i == 0) && (x / i <= n)) {
      cont += 2 - (i == x / i);
    }
  }

  cout << cont << endl;
  return 0;
}
