#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  cin >> n;
  vector<string> times(n);

  for (size_t i = 0; i < n; i++) {
    int h, m;
    cin >> h >> m;
    times[i] = to_string(h) + to_string(m);
  }

  int biggest = 0;
  for(const auto& v : times) {
    if (count(times.begin(), times.end(), v) > biggest) {
      biggest = count(times.begin(), times.end(), v);
    }
  }
  cout << biggest << endl;
  return 0;
}
