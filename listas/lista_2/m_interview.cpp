#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){

    int n;
    cin >> n;
    vector<long> a(n);
    vector<long> b(n);

    for (size_t i = 0; i < n; i++) {
      cin >> a[i];
    }
    for (size_t i = 0; i < n; i++) {
      cin >> b[i];
    }

    long res(0);
    for (int l = 0; l < n; l++) {
      long currentA(0), currentB(0);
      for (int r = l; r < n; r++){
        currentA |= a[r];
        currentB |= b[r];
        if(currentA + currentB > res) {
          res = currentA + currentB;
        }
      }
    }

    cout << res << endl;

    return 0;
}
