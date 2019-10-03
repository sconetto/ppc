#include <bits/stdc++.h>
#define pi 3.1415926536

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  int n;
  cin >> n;
  vector<int> rn(n);
  double blue = 0.0, red = 0.0;
  for (size_t i = 0; i < n; i++) {
    cin >> rn[i];
  }
  sort(rn.begin(), rn.end(), greater<int>());
  for (size_t i = 0; i < n; i++) {
    if((i + 1) % 2 != 0)
      blue += pi * ((double) rn[i] * (double) rn[i]);
    else
      red += pi * ((double) rn[i] * (double) rn[i]);
  }
  cout << blue - red << endl;
  return 0;
}
