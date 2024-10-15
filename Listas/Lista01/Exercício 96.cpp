#include <iostream>
#include <iomanip> /
using namespace std;

// Função para exibir o padrão em forma de triângulo
void exibirPadrao(int n) {
    for (int i = 1; i <= n; i++) {
        cout << setw(n - i + 1) << "";
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        for (int j = 2; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    exibirPadrao(n);
    return 0;
}
