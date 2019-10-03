#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  long long n, t, c;
  cin >> n >> t >> c;
  vector<long long> prisioners(n);
  prisioners.push_back(-1);
  for (size_t i = 0; i < n; i++) {
    long aux;
    cin >> aux;
    if (aux > t) {
      prisioners.push_back(i);
    }
  }
  prisioners.push_back(n);

  long ways = 0;
  for (size_t i = 0; i + 1 < prisioners.size(); i++) {
    long diff = prisioners[i + 1] - prisioners[i];
    if (diff > c) {
      ways += diff - c;
    }
  }

  cout << ways << endl;
  return 0;
}
