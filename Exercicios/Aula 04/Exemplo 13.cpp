// ---------------------------------------------------------------------
// Exemplo 11: exemplo de uso de ponteiros para ponteiros
// ---------------------------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

// ---------------------------------------------------------------------
// Prot�tipo de Fun��es
// ---------------------------------------------------------------------

void alteraPonteiro(int **pp);

// ---------------------------------------------------------------------
// Fun��o Principal
// ---------------------------------------------------------------------
int main() {
    cout << "\n";
    cout << "Exemplo de Ponteiros para Ponteiros\n\n";

    // Declara uma vari�vel inteira
    int x = 10;

    // Declara um ponteiro e aponta para o endere�o da vari�vel inteira
    int *p = &x;

    // Exibe o valor apontado pelo ponteiro antes da altera��o
    cout << "Valor antes: " << *p << endl;

    // Executa a fun��o para alterar o ponteiro
    alteraPonteiro(&p);

    // Exibe o valor apontado pelo ponteiro ap�s a altera��o
    cout << " Valor apos: " << *p << endl;

    cout << endl;

    return 0;
}

// ---------------------------------------------------------------------
// Defini��o das fun��es
// ---------------------------------------------------------------------

    // Fun��o que altera um ponteiro
    void alteraPonteiro(int **p) {
        static int y = 100;

        // Faz o ponteiro original apontar para y
        *pp = &y;
    }
