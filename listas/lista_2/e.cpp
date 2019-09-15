#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <algorithm>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[]) {
  int index;
  int pos[4] = {0, 0, 0, 0};
  int where, to;
  ifstream file;
  ofstream out;
  file.open("input.txt");
  out.open("output.txt");
  file >> index;
  pos[index] = 1;
  for (size_t i = 1; i <= 3; i++) {
    file >> where >> to;
    auto temp = pos[where];
    pos[where] = pos[to];
    pos[to] = temp;
    // swap(pos[where], pos[to]);
  }
  for (size_t i = 1; i <= 3; i++) {
    if (pos[i]) {
      out << i << endl;
      break;
    }
  }
  file.close();
  out.close();
  return 0;
}
