#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> a(n);
  for (size_t i = 0; i < n; i++)
  {
    int aux;
    cin >> aux;
    a[i] = make_pair(aux, i + 1);
  }
  sort(a.begin(), a.end());
  vector<int> learn;
  int rem(k);
  for (size_t i = 0; i < n; i++) {
    if (a[i].first > rem)
      break;
    rem -= a[i].first;
    learn.push_back(a[i].second);
  }
  cout << learn.size() << endl;
  for (size_t i = 0; i < learn.size(); i++) {
    cout << learn[i] << ' ';
  }
  if (learn.size())
    cout << endl;


  return 0;
}
