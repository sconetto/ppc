#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<vector<long long>> a(n, vector<long long>(n, 0));
  int mRow(-1), mCol(-1);
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      cin >> a[i][j];
      if(a[i][j] == 0) {
        mRow = i;
        mCol = j;
      }
    }
  }

  vector<long long> rSum(n, 0);
  vector<long long> cSum(n, 0);
  long long diagSum(0), rdiagSum(0);
  for(size_t i = 0; i < n; i++) {
    for(size_t j = 0; j < n; j++) {
      rSum[i] += a[i][j];
      cSum[j] += a[i][j];
      diagSum += (i == j) * a[i][j];
      rdiagSum += (i + j == n - 1) * a[i][j];
    }
  }

  bool possible(1);
  int check = (mRow == 0 && n > 1) ? 1 : 0;
  long long checksum = rSum[check];
  long long x = checksum - rSum[mRow];

  if ((mRow == mCol) * x + diagSum != checksum)
    possible = 0;
  if ((mRow + mCol == n -1) * x + rdiagSum != checksum)
    possible = 0;

  for (size_t i = 0; i < n; i++) {
    if (!possible)
      break;
    if (i != mRow && rSum[i] != checksum) {
      possible = 0;
      break;
    }
  }
  if (cSum[mCol] + x != checksum)
    possible = 0;

  for (size_t j = 0; j < n; j++) {
    if (!possible)
      break;
    if (j != mCol && cSum[j] != checksum) {
      possible = 0;
      break;
    }
  }

  if (n == 1)
    x = 1;
  else if (x <= 0)
    possible = 0;

  cout << (possible ? x : -1) << endl;
  return 0;
}
