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
  int table[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> table[i][j];
    }
  }
  vector<int> rowsum(n);
  vector<int> columnsum(n);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      rowsum[i] += table[i][j];
      columnsum[j] += table[i][j];
    }
  }
  int winning = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (columnsum[j] > rowsum[i]) {
        winning++;
      }
    }
  }

  cout << winning <<  endl;
  return 0;
}
