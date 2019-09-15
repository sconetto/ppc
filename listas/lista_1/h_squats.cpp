#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]) {
  int n, su = 0, sd = 0, mins = 0;
  char aux;
  string hams;
  cin >> n;

  if (n < 2 || n > 200 || (n % 2) != 0) {
    exit(1);
  }
  for (size_t i = 0; i < n; i++) {
    cin >> aux;
    hams.push_back(aux);
    if (aux ==  'x') {
      sd++;
    } else if (aux == 'X') {
      su++;
    }
  }
  while(true) {
    if (su > sd) {
      mins++;
      su--;
      sd++;
      for (size_t i = 0; i < hams.size(); i++) {
        if (hams[i] == 'X') {
          hams[i] = 'x';
          break;
        }
      }
    } else if (sd > su) {
      mins++;
      sd--;
      su++;
      for (size_t i = 0; i < hams.size(); i++) {
        if (hams[i] == 'x') {
          hams[i] = 'X';
          break;
        }
      }
    } else if (sd == su) {
      break;
    }
  }
  cout << mins << endl << hams << endl;
  return 0;
}
