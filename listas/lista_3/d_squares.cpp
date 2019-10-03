#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  int n, k;
  cin >> n >> k;
  int ans = -1;
  vector<long long> an(n);
  for (size_t i = 0; i < n; i++) {
    cin >> an[i];
  }
  sort(an.begin(), an.end());
  if(k > n || (k < n - 1 && an[n-k] == an[n - k - 1])) {
    cout << "-1" << endl;
  } else {
    cout << an[n - k] << " " << "0" << endl;
  }
  return 0;
}
