#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  long m11, m12, m13, m21, m22, m23, m31, m32, m33;
  cin >> m11 >> m12 >> m13 >> m21 >> m22 >> m23 >> m31 >> m32 >> m33;
  long sum = (m12 + m13 + m21 + m23 + m31 + m32) / 2;
  m11 = sum - m12 - m13;
  m22 = sum - m21 - m23;
  m33 = sum - m31 - m32;
  cout << m11 << ' ' << m12 << ' ' << m13 << endl;
  cout << m21 << ' ' << m22 << ' ' << m23 << endl;
  cout << m31 << ' ' << m32 << ' ' << m33 << endl;
  return 0;
}
