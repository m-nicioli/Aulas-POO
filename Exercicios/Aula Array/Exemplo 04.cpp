// -----------------------------------------------------------------------------
// Exemplo 04: Exemplo de array de strings
//
// Demonstra como ordenar um array de strings utilizando o Quick Sort
// -----------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Total de nomes
#define TAM 10

// -----------------------------------------------------------------------------
// Protótipos de Função
// -----------------------------------------------------------------------------

void trocar(string& a, string& b);
int particao(string dados[], int menor, int maior);
void quickSort(string dados[], int menor, int maior);

// -----------------------------------------------------------------------------
// Função Principal
// -----------------------------------------------------------------------------

int main() {
    cout << "\n";
    // cout << "Exemplo de Array de Strings\n";
    cout << "Exemplo: Quick Sort\n\n";

    // Variáveis de controle da saída
    int i;

    // Declara um array para armazenar os nomes
    string nomes[TAM];

    // Loop que realiza a entrada dos nomes
    for (i = 0; i < TAM; ++i) {
        cout << "Informe o nome " << i + 1 << " : ";
        getline(cin, nomes[i]);
    }
}
