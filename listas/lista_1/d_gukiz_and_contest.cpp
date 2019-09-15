#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
  long long int n, aux;
  vector<long long> a, sorted;

  cin >> n;

  if (n < 0 || n > 2000) {
    exit(1);
  }

  for (size_t i = 0; i < n; i++) {
    cin >> aux;
    a.push_back(aux);
    // sorted.push_back(aux);
  }


  // auto [min, max] = minmax_element(a.begin(), a.end());
  // sort(sorted.begin(), sorted.end());

  // cout << *min  << " " << *max << endl;

  return 0;
}
