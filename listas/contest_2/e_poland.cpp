#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
  int n, m;
  cin >> n >> m;
  map<string, int> p_words;
  map<string, int> e_words;
  int p = 0, e = 0;
  for (size_t i = 0; i < n; i++)
  {
    string word;
    cin >> word;
    if (p_words[word] < 1 && p_words[word] != 1) {
      p_words[word] += 1;
      p++;
    }
  }

  for (size_t i = 0; i < m; i++) {
    string word;
    cin >> word;
    if (p_words[word] == 0) {
      if (e_words[word] < 1 && e_words[word] != 1) {
        e_words[word] += 1;
        e++;
      }
    }
  }

  if(e >= p) {
    cout << "NO" << endl;
  } else {
    cout << "YES" << endl;
  }
  return 0;
}
