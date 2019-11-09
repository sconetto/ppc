#include <bits/stdc++.h>
#include <numeric>

using namespace std;

int gcd(int a, int b) {
  for (;;) {
    if (a == 0) return b;
    b %= a;
    if (b == 0) return a;
    a %= b;
  }
}

int lcm(int a, int b) {
    int temp = gcd(a, b);
    return temp ? (a / temp * b) : 0;
}

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  int x, y;
  unsigned long long a, b;
  cin >> x >> y >> a >> b;
  long long ans(0);
  long long multiple = lcm(x, y);
  // long long count(1);
  long long l = ((a + multiple - 1) / multiple);
  long long r = (b /  multiple);
  // while(true) {
  //   auto n = count * multiple;
  //   if (n >= a && n <= b)
  //     ans++;
  //   ++count;
  //   if (n > b)
  //     break;
  // }
  ans = (r - l + 1);
  cout << ans << endl;
  return 0;
}
