#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  vector<long long> ints(n);
  long long sum = 0;

  for (size_t i = 0; i < n; i++) {
    cin >> ints[i];
    if (n == 1) {
      ints[i] = (ints[i] & 1) ? 0 : ints[i];
    } else if (n > 1) {
      sum += ints[i];
    }
  }
  sort(ints.begin(), ints.end());
  int count = 0;
  while (sum % 2 != 0) {
    auto aux = sum;
    aux -= ints[count];
    if (aux % 2 == 0) {
      sum = aux;
      break;
    } else {
      count++;
    }
  }
  if (sum < 0) sum = 0;
  cout << sum << endl;
  return 0;
}
