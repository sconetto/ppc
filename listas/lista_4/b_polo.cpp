#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  const string ab = "ab";
  string a = "a";
  long long n;
  int k;
  cin >> n >> k;
  if (k > n)
    cout << "-1" << endl;
  else {
    if (k == 1) {
      if (n != 1)
        cout << "-1" << endl;
      else {
        for (size_t i = 0; i < n; i++)
          cout << a;
        cout << endl;
      }
    } else {
      for (size_t i = 0; i < n - (k - 2); i++) {
        (i % 2 == 0) ? printf("%c", 97) : printf("%c", 98);
      }
      if (k == 2)
        printf("\n");
      for (int i = 0; i < k - 2; i++) {
        (i == k - 3) ? printf("%c\n", 97 + (i + 2)) : printf("%c", 97 + (i + 2));
      }
    }
  }

  return 0;
}
