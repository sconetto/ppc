#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  int n;
  cin >> n;

  int first(0);
  cin >> first;
  int second(first);

  int minSoFar(first);
  for (size_t i = 1; i < n; i++){
    cin >> second;
    int current = max(first, second);
    if (current < minSoFar) {
      minSoFar = current;
    }
    first = second;
  }
  minSoFar = min(minSoFar, second);

  cout << minSoFar << endl;

  return 0;
}
