#include <iostream>
#include <utility>
#include<vector>
#define SCAN 5
#define RECEIVE 15
#define MAX 100000

using namespace std;

int main(int argc, char const *argv[]) {
  int n, aux, time = 0, count = 0;
  vector<int> people;
  vector<int> products;
  pair<int, int> best (0, MAX);

  cin >> n;

  if (n < 1 || n > 100) {
    exit(1);
  }
  for (size_t i = 0; i < n; i++) {
    cin >> aux;
    if (aux < 1 || aux > 100) {
      exit(1);
    }
    people.push_back(aux);
  }

  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < people[i]; j++) {
      cin >> aux;
      if (aux < 1 || aux > 100) {
        exit(1);
      }
      products.push_back(aux);
    }
  }

  // for (int val : people) {
  //   cout << val << " ";
  // }
  // cout << endl;
  // for (int val : products) {
  //   cout << val << " ";
  // }
  // cout << endl;


  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < people[i]; j++) {
      time += products[count] * SCAN;
      count++;
    }
    time += people[i] * RECEIVE;
    if (best.second > time) {
      best.second = time;
    }
    time = 0;
  }

  cout << best.second << endl;
  return 0;
}
