#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  long n;
  cin >> n;
  vector<long> invent(n);
  set<long> remain;
  for (size_t i = 1; i <= n; i++)
    remain.insert(i);

  for (size_t i = 0; i < n; i++) {
    cin >> invent[i];
    if (remain.count(invent[i]) > 0)
      remain.erase(invent[i]);
  }

  set<long> used;
  for (size_t i = 0; i < n; i++) {
    if(used.count(invent[i]) > 0 || invent[i] <= 0 || invent[i] > n) {
      long temp = *remain.begin();
      invent[i] = temp;
      remain.erase(temp);
    } else {
      used.insert(invent[i]);
    }
  }

  for (size_t i = 0; i < n; i++) {
    cout << invent[i] << (invent[i] != invent.back() ? " " : "\n");
  }
  return 0;
}
