#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n, k;
  cin >> n >> k;
  vector<string> a;
  int ans(0);
  for (size_t i = 0; i < n; i++) {
    string aux, digit;
    digit = to_string(k);
    cin >> aux;
    while (stoi(digit) < 10) {
      auto f = aux.find(digit);
      if (f != string::npos) {
        ans++;
        break;
      }
      digit = to_string(stoi(digit) + 1);
    }
  }
  cout << ans << endl;
  return 0;
}
