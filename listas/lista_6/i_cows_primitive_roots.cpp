#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int p;
  int roots(0);
  cin >> p;
  for (size_t i = 1; i < p; i++) {
    bool isroot(1);

    long pol = 1;
    for (size_t j = 1; j <= p - 2; j++) {
      pol *= i;
      pol %= p;
      if (pol == 1) {
        isroot = 0;
        break;
      }
    }

    if (isroot) {
      pol *= i;
      pol %= p;
      isroot = (pol == 1);
    }

    if (isroot)
      roots++;
  }
  cout << roots << endl;
  return 0;
}
