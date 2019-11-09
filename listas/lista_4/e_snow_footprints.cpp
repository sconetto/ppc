#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  int n;
  string steps;
  cin >> n;
  cin >> steps;
  int t = 0, s = 0;
  char first;
  for (size_t i = 0; i < n; i++) {
    if(steps[i] != '.') {
      first = steps[i];
      s = i + 1;
      break;
    }
  }
  for (size_t i = 0; i < n; i++) {
    if(steps[i + 1] != first && steps[i] != '.') {
      t = i + 1;
      break;
    }
  }

  cout << s << " " << t << endl;

  return 0;
}
