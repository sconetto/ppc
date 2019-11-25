#include <bits/stdc++.h>

using namespace std;

long long prime(long long x) {
  if (x <= 1)
    return false;
  for (size_t i = 2; i * i <= x; i++) {
    if(x % i == 0)
      return false;
  }
  return true;
}

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  long long n;
  cin >> n;
  long long ans(0);
  if(prime(n))
    ans = 1;
  else if (n % 2 == 0)
    ans = 2;
  else if((n % 2) && prime(n - 2))
    ans = 2;
  else if((n % 2) && !prime(n - 2))
    ans = 3;

  cout << ans << endl;
  return 0;
}
