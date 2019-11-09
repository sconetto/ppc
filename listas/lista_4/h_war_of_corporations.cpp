#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  string a, b;
  cin >> a >> b;
  size_t ans = 0;
  size_t found(-b.size());
  while(true) {
      found = a.find(b, found + b.size());
      if(found == string::npos)
        break;
      else
        ++ans;
  }

  cout << ans << endl;
  return 0;
}
