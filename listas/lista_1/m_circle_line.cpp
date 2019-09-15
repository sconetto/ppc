#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int n, s, t;
  int *d;
  int left = 0, right = 0;
  cin >> n;
  if (n < 3 || n > 100) {
    exit(1);
  }
  d = (int *) malloc(n * sizeof(int));

  for (size_t i = 1; i <= n; i++) {
    cin >> d[i];
    if (d[i] < 1 || d[i] > 100) {
      exit(1);
    }
  }
  cin >> s >> t;
  if (s < 1 || t > n) {
    exit(1);
  }
  if (s == t) {
    cout << '0' << endl;
  } else {
    for (size_t i = s; i != t;) {
      left += d[i];
      i = i % n + 1;
    }
    for (size_t i = t; i != s;) {
      right += d[i];
      i = i % n + 1;
    }
    cout << min(left, right) << endl;
  }
  return 0;
}
