#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
  long na, nb;
  long k, m;
  cin >> na >> nb;
  cin >> k >> m;
  vector<long> a(na), b(nb);

  for (size_t i = 0; i < na; i++) {
    cin >> a[i];
  }
  for (size_t i = 0; i < nb; i++) {
    cin >> b[i];
  }

  if (a[k - 1] < b[nb - m]) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
