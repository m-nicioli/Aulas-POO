// ----------------------------------------------------------------------------
// Prova P1
// ----------------------------------------------------------------------------

#include <iostream>
#include <vector>

using namespace std;

// ----------------------------------------------------------------------------
// Função Principal
// ----------------------------------------------------------------------------
int main() {

    // Definindo as variáveis
    const int MAX_VALORES = 4;
    vector<int> valores(MAX_VALORES);

    cout << "Inicio: Prova P1\n\n\n";

    // Recebendo até 4 valores inteiros
    cout << "Informe os " << MAX_VALORES << " dados inteiros:" << endl;
    for (int i = 0; i < MAX_VALORES; ++i) {
        cout << "Valor " << (i + 1) << ": ";
        cin >> valores[i];
    }
    cout << "\n\n\n";


    // Exibindo o histograma
    cout << "\nHistograma:\n";

    // Exibindo os valores do histograma
    for (int i = 0; i < MAX_VALORES; ++i) {
        cout << valores[i] << "|" << " ";
        for (int j = 0; j < valores[i]; ++j) {
            cout << "*" << " ";
        }
        cout << endl;
    }

    // Eixo inferior
    cout << " "<< "+";
    for (int i = 0; i < MAX_VALORES + 1; ++i) {
        cout << " -";
    }
    cout << endl;

    // Exibindo os números das colunas
    for (int i = 0; i <= MAX_VALORES + 1; ++i) {
        cout << " " << i;
    }
    cout << "\n\n\n";

    cout << ">> Fim: Prova P1 :)\n\n";
    return 0;
}


