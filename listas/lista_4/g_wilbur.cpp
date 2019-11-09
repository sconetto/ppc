#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  int n;
  cin >> n;

  set<long> X, Y;

  for (size_t i = 0; i < n; i++) {
      long x, y;
      cin >> x >> y;
      X.insert(x); Y.insert(y);
  }

  if (X.size() < 2 || Y.size() < 2) {
    cout << "-1" << endl;
    return 0;
  }

  long length = (*(X.begin())) - (*(++X.begin()));

  if (length < 0)
    length = -length;


  long width = (*(Y.begin())) - (*(++Y.begin()));

  if(width < 0)
    width = -width;

  cout << length * width << endl;

  return 0;
}
