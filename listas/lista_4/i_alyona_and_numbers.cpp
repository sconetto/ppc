#include <bits/stdc++.h>

using namespace std;

const int D = 5;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  long n, m; scanf("%ld %ld\n", &n, &m);
  vector<long long> a(D);
  vector<long long> b(D);

  a[0] = n / D; b[0] = m / D;
  for (int p = 1; p < D; p++) {
      a[p] = (n / D) + (n % D >= p);
      b[p] = (m / D) + (m % D >= p);
  }

  long long res(0);
  for (int p = 0; p < D; p++) {
    res += a[p] * b[(D - p) % D];
  }
  printf("%lld\n", res);

  return 0;
}
