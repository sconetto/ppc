#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
  int read;
  long long int n;
  long long int untreated = 0, officers = 0;
  cin >> n;
  if (n < 1 || n > pow(10, 5)) {
    exit(1);
  }

  for (size_t i = 0; i < n; i++) {
    cin >> read;
    if (read == -1 && officers > 0) {
      officers--;
    }
    else if (read == -1 && officers <= 0) {
      untreated++;
    }
    else if (read >= 1) {
      if (read > 10) {read = 10;}
      officers += read;
    }
  }
  cout << untreated << endl;
  return 0;
}
