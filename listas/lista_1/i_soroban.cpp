#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  long long int number;
  int aux;
  string str;
  cin >> number;
  if (number < 0 || number > pow(10, 9)) {
    exit(1);
  }

  str = to_string(number);
  for (size_t i = str.size(); i > 0; i--) {
    aux = str[i - 1] - '0';
    if ((aux / 5) >= 1) {
      cout << "-O|";
    } else {
      cout << "O-|";
    }
    for (size_t i = 0; i < 5; i++) {
      if ((aux % 5) == i) {
        cout << "-";
      } else {
        cout << "O";
      }
    }
    cout << "\n";
  }
  return 0;
}
