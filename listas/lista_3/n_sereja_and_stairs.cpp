#include <bits/stdc++.h>
#define MAX 5000

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  long m;
  cin >> m;
  long b[5002] = {0};
  vector <int> ans;
  while (m--) {
    long aux;
    cin >> aux;
    b[aux]++;
  }
  for (size_t i = 1; i <= MAX; i++) {
    if (b[i] > 0) {
      b[i]--;
      ans.push_back(i);
    }
  }
  m = ans.size();
  for (size_t i = ans[m - 1] - 1; i > 0; i--) {
    if(b[i] > 0) {
      ans.push_back(i);
    }
  }
  cout << ans.size() << endl;
  for (auto v : ans)
    cout << v << " ";
  cout << endl;
  return 0;
}
