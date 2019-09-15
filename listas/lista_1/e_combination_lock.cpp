#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
  int disks, moves = 0;
  char *original, *combination;
  cin >> disks;
  if (disks < 1 || disks > 1000) {
    exit(1);
  }

  original = (char *) malloc(disks * sizeof(char));
  combination = (char *) malloc(disks * sizeof(char));
  cin >> original;
  cin >> combination;

  for (size_t i = 0; i < disks; i++) {
    int a = (int) original[i] - 48;
    int b = (int) combination[i] - 48;
    if ((a < 0 || a > 9) || (b < 0 || b > 9)) exit(1);
    if (abs(a - b) > 5) {
      moves += 10 - abs(a - b);
    }
    else {
      moves += abs(a - b);
    }
  }

  cout << moves << endl;

  return 0;
}
