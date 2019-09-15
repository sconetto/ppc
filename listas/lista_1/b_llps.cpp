#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  string s;
  cin >> s;

  map<char, long long> result;
  char minc = 0;

  for(auto &ch : s) {
    result[ch]++;
    minc = max(ch, minc);
  }

  for (size_t i = 0; i < result[minc]; i++) {
    cout << minc;
  }
  cout << endl;
  return 0;
}
