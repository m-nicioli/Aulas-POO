// ---------------------------------------------------------------------
// Exemplo 08: ponteiros para função
// ---------------------------------------------------------------------

#include <iostream>

using namespace std;

// ---------------------------------------------------------------------
// Protótipo das funções
// ---------------------------------------------------------------------

int soma(int a, int b);
int subtrai(int a , int b);

// ---------------------------------------------------------------------
// Função principal
// ---------------------------------------------------------------------
int main() {
    cout << "\n";
    cout << "Prototipo para Funcoes \n\n";

    // Declara um ponteiro para função
    int (*operacao)(int, int);

    // Atribui a função soma() ao ponteiro
    operacao = soma;

    // Chamando a função () através do ponteiro
    cout << "Soma: " << operacao(10, 5) << endl;

    // Atribuindo a função subtrai() ao ponteiro
    operacao = subtrai;

    // Chamando a função subtrai () através do ponteiro
    cout << "Subtracao: " << operacao(10, 5) << endl;

    cout << "\n";

    return 0;
}

// ---------------------------------------------------------------------
// Definição das funções
// ---------------------------------------------------------------------

    // Função que realiza uma soma
    int soma(int a, int b) {
        return a + b;
    }

    // ---------------------------------------------------------------------

    // Função que realiza uma subtração
    int subtrai(int a, int b) {
        return a - b;
    }
