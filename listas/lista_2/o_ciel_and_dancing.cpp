#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  int boys, girls;
  cin >> boys >> girls;
  int songs = 1;
  int dancedb = 1, dancedg = 1;
  int counter = 0;
  vector<pair<int, int>> hist((boys * girls) + 1);
  hist[counter] = make_pair(dancedb, dancedg);
  while (true) {
    if (counter % 2 == 0 && dancedg < girls) {
      dancedg++;
      hist[counter + 1] = make_pair(dancedb, dancedg);
      songs++;
    } else if (counter % 2 != 0 && dancedb < boys) {
      dancedb++;
      hist[counter + 1] = make_pair(dancedb, dancedg);
      songs++;
    }
    counter++;
    if(dancedb == boys && dancedg == girls) break;
  }

  cout << songs << endl;
  for (const auto& v : hist) {
    if (v.first != 0 && v.second != 0)
      cout << v.first << " " << v.second << endl;
  }
  return 0;
}
