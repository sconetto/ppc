#include <iostream>
#include <vector>

using namespace std;

vector<int> toTernary(long long x) {
  vector<int> ternary;
  while(x > 0) {
    ternary.push_back(x % 3);
    x /= 3;
  }
  return ternary;
}

long long toDecimal(vector<int> x) {
  long long result(0);
  for(int i = x.size() - 1; i >= 0; i--) {
    result = 3 * result + x[i];
  }
  return result;
}

vector<int> tor(vector<int> x, vector<int> y) {
  vector<int> result;
  for (size_t i = 0; i < x.size() || i < y.size(); i++) {
    int aux = 0;
    if (i < x.size()) {
      aux += 3 + x[i];
    }
    if (i < y.size()) {
      aux += 3 - y[i];
    }
    result.push_back(aux % 3);
  }
  return result;
}

int main(int argc, char const *argv[]) {
  long long a, c;
  cin >> a >> c;
  vector<int> t = tor(toTernary(c), toTernary(a));
  long long result = toDecimal(t);
  cout << result << endl;
  return 0;
}
