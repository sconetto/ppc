#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  if (n == 1 || n == 2) {
    cout << -1 << endl;
  } else {
    for (size_t i = 1; i <= n - 1; i++) {
      cout << 2 << " ";
    }
    cout << 1 << endl;
  }
  return 0;
}
