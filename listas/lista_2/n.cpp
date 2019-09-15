#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  int zeros(0), ones(0);
  cin >> n;
  string input;
  input.reserve(n);
  cin >> input;
  for (size_t i = 0; i < n; i++)
  {
    if (input[i] == '1') ones++;
    else if (input[i] == '0') zeros++;
  }

  cout << abs(zeros - ones) << endl;
  return 0;
}
