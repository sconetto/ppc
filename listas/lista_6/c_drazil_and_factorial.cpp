#include <bits/stdc++.h>

using namespace std;

vector<int> refactor(vector<int> plast, int input) {
  vector<int> output(plast);
  if(input == 2){output.push_back(2);}
  else if(input == 3){output.push_back(3);}
  else if(input == 4){output.push_back(2); output.push_back(2); output.push_back(3);}
  else if(input == 5){output.push_back(5);}
  else if(input == 6){output.push_back(3); output.push_back(5);}
  else if(input == 7){output.push_back(7);}
  else if(input == 8){output.push_back(2); output.push_back(2); output.push_back(2); output.push_back(7);}
  else if(input == 9){output.push_back(2); output.push_back(3); output.push_back(3); output.push_back(7);}

  return output;
}

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  string a;
  cin >> a;
  vector<int> digits;
  for (size_t i = 0; i < n; i++) {
    digits = refactor(digits, a[i] - '0');
  }
  sort(digits.rbegin(), digits.rend());
  for (size_t i = 0; i < digits.size(); i++) {
    cout << digits[i];
  }
  cout << endl;
  return 0;
}
