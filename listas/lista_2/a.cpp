#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<int> m(5), w(5);
  int total = 0;
  int succ, fail;
  for (size_t i = 0; i < 5; i++) {
    cin >> m[i];
  }
  for (size_t i = 0; i < 5; i++) {
    cin >> w[i];
  }
  cin >> succ >> fail;

  total += 100 * succ;
  total -= 50 * fail;
  int counter = 0;
  float top;
  for (size_t i = 500; i <= 2500; i += 500) {
    auto a = 0.3 * i;
    float b = (1.0 - (m[counter] / 250.0)) * i - (50.0 * w[counter]);
    if (a > b) {
      top = a;
    }
    else {
      top = b;
    }
    total += top;
    counter++;
  }
  cout << total << endl;
  return 0;
}
