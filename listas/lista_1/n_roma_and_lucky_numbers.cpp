#include <iostream>
#include <vector>

using namespace std;

int lucky(long long number) {
  int count = 0, aux = 0;
  while(number > 0) {
    aux = number % 10;
    if (aux == 4 || aux == 7) {
      count++;
    }
    number /= 10;
  }
  return count;
}

int main(int argc, char const *argv[]) {
  long long int n;
  int k;
  int aux;
  int lucky_ints = 0;
  vector<long long> a;
  cin >> n >> k;
  if (n < 1 || k > 100) {
    exit(1);
  }
  for (size_t i = 0; i < n; i++) {
    cin >> aux;
    a.push_back(aux);
  }

  for(long long val : a) {
    if (lucky(val) <= k) {
      lucky_ints++;
    }
  }

  cout << lucky_ints << endl;
  return 0;
}
