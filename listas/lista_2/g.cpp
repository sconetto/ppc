#include <iostream>
#include <vector>
#include <map>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]) {
  int n;
  map<string, string> crew;
  cin >> n;
  for (size_t i = 0; i < n; i++) {
    string name, status;
    cin >> name >> status;
    crew.insert(make_pair(name, status));
  }

  vector<string> order(n);
  int pos = 4, count = 0;
  while (crew.size()) {
    for (const auto& [k, v] : crew) {
      if (v.compare("captain") == 0 && pos == 1) {
        order[count] = k;
        count++;
      } else if (v.compare("man") == 0 && pos == 2) {
        order[count] = k;
        count++;
      } else if (v.compare("woman") == 0 && pos == 3) {
        order[count] = k;
        count++;
      } else if (v.compare("child") == 0 && pos == 3) {
        order[count] = k;
        count++;
      } else if (v.compare("rat") == 0 && pos == 4) {
        order[count] = k;
        count++;
      }
    }
    pos--;
    for (const auto& name : order) {
      if (crew.find(name) != crew.end()) {
        auto it = crew.find(name);
        crew.erase(it);
      }
    }
  }
  for (const auto& name : order) {
    cout << name << endl;
  }

  return 0;
}
