#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  long long n;
  cin >> n;
  long long a, b, c;
  cin >> a >> b >> c;
  long long ans(0);
  // while(true) {
  //   if((n - a) < 0 && (n - b) < 0) {
  //     break;
  //   }
  //   if ((a - n) > ((b - n) + c)) {
  //     ans++;
  //     n -= a;
  //   } else if ((a - n) < ((b - n) + c)) {
  //     ans++;
  //     n -= b;
  //     n += c;
  //   } else if ((a - n) == ((b - n) + c)) {
  //     ans++;
  //     n -= a;
  //   }
  //   if (n < 0)
  //     break;
  // }
  if (a < b - c) {
    cout << (n / a) << endl;
  } else {
    ans = (n - c) / (b - c);
    if (ans < 0)
      ans = 0;
    auto rem = n - ans * (b - c);
    ans += (rem / a);
    cout << ans << endl;
  }
  return 0;
}
