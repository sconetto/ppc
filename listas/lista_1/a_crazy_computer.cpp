#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(int argc, char const *argv[]) {
  // Declara as variáveis
  long long int n, c, aux;
  int words = 1;
  vector<long long> tn;
  // Lê número de words (n) e o delay do computador (c)
  cin >> n >> c;

  // Verifica se o número de words está no intervalo
  if (n < 1 || n > 100000) {
    exit(1);
  }

  // Verifica se o delay esta no intervalo
  if (c < 1 ||  c > pow(10, 9)) {
    exit(1);
  }

  // Lê o tempo das words digitadas e coloca em um vector<long long>
  for (size_t i = 0; i < n; i++) {
    cin >> aux;
    tn.push_back(aux);
  }

  // Verifica após a primeira word se as digitações respondem ao delay
  // da máquina, caso verdadeiro, adicionam palavras a tela, caso contrário
  // verifica se o delay foi acima do esperado e reseta a quantidade de words
  // na tela.
  for (size_t i = 0; i < tn.size(); i++) {
    if (i > 0) {
      if (tn[i] - tn[i - 1] <= c) {
        words++;
      } else if (tn[i] - tn[i - 1] > c) {
        words = 1;
      }
    }
  }

  cout << words << endl;
  // for para percorrer todos os valores do vector
  // for(long long int& val : tn) {
  //   cout << val << endl;
  // }
  return 0;
}
