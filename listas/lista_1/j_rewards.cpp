#include <iostream>
#define CUPS 5
#define MEDALS 10
#define PLACES 3
using namespace std;

int main(int argc, char const *argv[]) {
  int a[3], b[3], n, ta = 0, tb = 0;
  int shelves = 0, aux = 0;

  for (size_t i = 0; i < PLACES; i++) {
    cin >> a[i];
    if (a[i] < 0 || a[i] > 100) {
      exit(1);
    }
    ta += a[i];
  }

  for (size_t i = 0; i < PLACES; i++) {
    cin >> b[i];
    if (b[i] < 0 || b[i] > 100) {
      exit(1);
    }
    tb += b[i];
  }

  cin >> n;

  if (n < 1 || n > 100) {
    exit(1);
  }

  shelves += (ta / CUPS) + ((ta % CUPS) > 0);
  shelves += (tb / MEDALS) + ((tb % MEDALS) > 0);

  if (shelves > n) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }

  return 0;
}
