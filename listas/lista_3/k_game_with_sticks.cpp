#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  int n, m;
  cin >> n >> m;
  int small = min(n, m);
  if (small % 2)
    cout << "Akshat\n";
  else
    cout << "Malvika\n";
  return 0;
}
