#include <bits/stdc++.h>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  int q;
  cin >> q;

  vector<int> prices(q);
  for (size_t i = 0; i < q; i++) {
    int n;
    cin >> n;
    auto sum = 0;
    for (size_t j = 0; j < n; j++) {
      long long aux;
      cin >> aux;
      sum += aux;
    }
    prices[i] = ceil((float) sum / (float)n);
  }

  for (auto p : prices)
    cout << p << endl;

  return 0;
}
