#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]) {
  ios::sync_with_stdio(false);
  long n, m;
  cin >> n >> m;
  map<string, pair<string, string>> words;
  for (size_t i = 0; i < m; i++) {
    string f, s;
    cin >> f >> s;
    words[f] = make_pair(f, s);
  }
  vector<string> phrase(n);
  for (size_t i = 0; i < n; i++) {
    string aux;
    cin >> aux;
    phrase.push_back(aux);
  }
  for(const auto& w : phrase) {
    string aux;
    if (words[w].first.length() < words[w].second.length())
      aux = words[w].first;
    else if (words[w].first.length() == words[w].second.length())
      aux = words[w].first;
    else
      aux = words[w].second;
    cout << aux << ' ';
  }
  cout << endl;
  return 0;
}
