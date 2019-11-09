#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  string home, away;
  char side, card;
  int n, time, player;
  cin >> home >> away >> n;
  vector<int> pHome(100, 0), pAway(100, 0);
  for (size_t i = 0; i < n; i++) {
    cin >> time >> side >> player >> card;
    if (player == 16)
      continue;
    if (side == 'h') {
      if((card == 'r') && (pHome[player] != 2))
        cout << home << " " << player << " " << time << endl;
      else if ((card == 'y') && (pHome[player] == 1))
        cout << home << " " << player << " " << time << endl;
      else if ((card == 'y') && (pHome[player] != 2))
        pHome[player] = 1;
    } else {
      if((card == 'r') && (pAway[player] != 2))
        cout << away << " " << player << " " << time << endl;
      else if ((card == 'y') && (pAway[player] == 1))
        cout << away << " " << player << " " << time << endl;
      else if ((card == 'y') && (pAway[player] != 2))
        pAway[player] = 1;
    }
  }

  return 0;
}
