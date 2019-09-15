#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<string> unit = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  vector<string> teens = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
  vector<string> dozens = {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

  int n;
  cin >> n;
  if (n <= 9) {
    cout << unit[n] << endl;;
  } else if (n > 0 && n < 20) {
    cout << teens[n % 10] << endl;
  } else if (n >= 20) {
    cout << dozens[(n / 10) - 2];
    if (n % 10 != 0) {
      cout << '-' << unit[n % 10] << endl;
    } else {
      cout << endl;
    }
  }
  return 0;
}
