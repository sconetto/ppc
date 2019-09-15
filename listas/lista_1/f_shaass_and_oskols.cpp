#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  int n, m, aux;
  int x, y;
  int *a;

  cin >> n;

  if (n < 1 || n > 100)
    exit(1);

  a = (int *) malloc((n + 1) * sizeof(int));

  for (size_t i = 1; i <= n; i++) {
    cin >> aux;
    if (aux < 0 || aux > 100)
      exit(1);
    a[i] = aux;
  }
  cin >> m;

  if (m < 0 || m > 100)
    exit(1);

  for (size_t i = m; i > 0; i--) {
    cin >> x >> y;
    if (x < 0 || x > n)
      exit(1);
    if (y < 0)
      exit(1);

    a[x - 1] += (y - 1);
    a[x + 1] += (a[x] - y);
    a[x] = 0;
  }

  for (size_t i = 1; i <= n; i++) {
    cout << a[i] << endl;
  }

  return 0;
}
