// ---------------------------------------------------------------------
// Exemplo 11: exemplo de uso de ponteiros para ponteiros
// ---------------------------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

// ---------------------------------------------------------------------
// Protótipo de Funções
// ---------------------------------------------------------------------

void alteraPonteiro(int **pp);

// ---------------------------------------------------------------------
// Função Principal
// ---------------------------------------------------------------------
int main() {
    cout << "\n";
    cout << "Exemplo de Ponteiros para Ponteiros\n\n";

    // Declara uma variável inteira
    int x = 10;

    // Declara um ponteiro e aponta para o endereço da variável inteira
    int *p = &x;

    // Exibe o valor apontado pelo ponteiro antes da alteração
    cout << "Valor antes: " << *p << endl;

    // Executa a função para alterar o ponteiro
    alteraPonteiro(&p);

    // Exibe o valor apontado pelo ponteiro após a alteração
    cout << " Valor apos: " << *p << endl;

    cout << endl;

    return 0;
}

// ---------------------------------------------------------------------
// Definição das funções
// ---------------------------------------------------------------------

    // Função que altera um ponteiro
    void alteraPonteiro(int **p) {
        static int y = 100;

        // Faz o ponteiro original apontar para y
        *pp = &y;
    }
