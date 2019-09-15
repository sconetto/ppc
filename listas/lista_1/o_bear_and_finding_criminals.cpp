#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  int n, a;
  int *tn;
  int caught = 0;
  cin >> n >> a;

  if ((a < 0 ||a > n) || (n > 100)) {
    exit(1);
  }

  tn = (int *) malloc((n + 1) * sizeof(int));

  for (size_t i = 1; i <= n; i++) {
    cin >> tn[i];
  }

  if (tn[a]) {
    caught++;
  }

  int counter = 1;
  while (1) {
    int left = a - counter;
    int right = counter + a;
    if (left < 1 && right > n) {
      cout << caught << endl;
      break;
    }
    else if(left < 1) {
      if(tn[right]) {
        caught++;
      }
    }
    else if(right > n) {
      if(tn[left]) {
        caught++;
      }
    }
    else {
      if(tn[right] && tn[left]) {
        caught += 2;
      }
    }
    counter++;
  }
  return 0;
}
