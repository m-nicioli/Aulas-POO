// ---------------------------------------------------------------------
// Exemplo 08: ponteiros para fun��o
// ---------------------------------------------------------------------

#include <iostream>

using namespace std;

// ---------------------------------------------------------------------
// Prot�tipo das fun��es
// ---------------------------------------------------------------------

int soma(int a, int b);
int subtrai(int a , int b);

// ---------------------------------------------------------------------
// Fun��o principal
// ---------------------------------------------------------------------
int main() {
    cout << "\n";
    cout << "Prototipo para Funcoes \n\n";

    // Declara um ponteiro para fun��o
    int (*operacao)(int, int);

    // Atribui a fun��o soma() ao ponteiro
    operacao = soma;

    // Chamando a fun��o () atrav�s do ponteiro
    cout << "Soma: " << operacao(10, 5) << endl;

    // Atribuindo a fun��o subtrai() ao ponteiro
    operacao = subtrai;

    // Chamando a fun��o subtrai () atrav�s do ponteiro
    cout << "Subtracao: " << operacao(10, 5) << endl;

    cout << "\n";

    return 0;
}

// ---------------------------------------------------------------------
// Defini��o das fun��es
// ---------------------------------------------------------------------

    // Fun��o que realiza uma soma
    int soma(int a, int b) {
        return a + b;
    }

    // ---------------------------------------------------------------------

    // Fun��o que realiza uma subtra��o
    int subtrai(int a, int b) {
        return a - b;
    }
