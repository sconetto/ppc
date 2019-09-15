#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  // Declara as variáveis
  int n, p, q;
  long long availabes = 0;

  // Lê a quantidade de quartos que vão ser lidos (n)
  cin >> n;

  // Verifica se n está no intervalo permitido
  if (n < 1 || n > 100) {
    exit(1);
  }

  for (size_t i = 0; i < n; i++) {
    // Lê a quantidade de pessoas e a capacidade do quarto
    cin >> p >> q;

    // Faz verificação dos intervalos permitidos
    if (p < 0 || q > 100) {
      exit(1);
    } else if (q < p) {
      exit(1);
    } else {
      // Se é possível acomodar duas pessoas no quarto
      // conta no disponíveis
      if (q - p >= 2) availabes++;
    }
  }

  // Imprime a quantidade disponível
  cout << availabes << endl;
  return 0;
}
