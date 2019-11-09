#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  const string name("bear");
  string in;
  cin >> in;
  int start(0), found(0);
  long ans(0);
  while(found != string::npos) {
    found = in.find(name, start);
    if (found != string::npos) {
      ans += (found - start + 1) * (in.size() - found - name.size() + 1);
      start = found + 1;
    }
  }
  cout << ans << endl;
  return 0;
}
