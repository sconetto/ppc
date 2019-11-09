#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  long long n;
  long long d = 1, start = 1, end = 10, total = 0;
  cin >> n;
  while (start <= n) {
    if (n < end )
      end = n + 1;
    total += d * (end - start);
    start = end;
    end *= 10;
    ++d;
  }

  cout << total << endl;
  return 0;
}
