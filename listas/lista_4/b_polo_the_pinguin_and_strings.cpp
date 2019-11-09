#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  long n;
  int k;
  char a = 97;
  cin >> n >> k;
  if (k > n)
    cout << "-1" << endl;
  else {
    if (k == 1) {
      for (size_t i = 0; i < n; i++) {
        printf("%c", a);
      }
      printf("\n");
    } else {
      for (size_t i = 0; i < n - (k - 2); i++) {
        (i % 2 == 0) ? printf("%c", a) : printf("%c", a + 1);
      }
      if (k == 2)
        printf("\n");
      for (int i = 0; i < k - 2; i++) {
        (i == k - 3) ? printf("%c\n", a + (i + 2)) : printf("%c", a + (i + 2));
      }
    }
  }
  return 0;
}
