#include <bits/stdc++.h>
#include <cmath>

using namespace std;

bool solve(long long v, long long k, long long n) {
  long long sum(0);
  int count(0);
  auto aux = (v / pow(k, count));
  while (aux >= 1.0) {
    sum += aux;
    count++;
    aux = (v / pow(k, count));
  }
  return sum >= n;
}

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  long long n, k;
  cin >> n >> k;
  auto upper = n - 1;
  auto lower = 1;
  long long v(0);
  while (lower <= upper) {
    v = lower + (upper - lower) / 2;
    if (!solve(v, k, n)) {
      lower = v + 1;
    } else {
      upper = v - 1;
    }
  }
  cout << lower << endl;
  return 0;
}
