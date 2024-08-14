//Exercicio 10: c�lculo de fatorial utilizando o FOR
//
// Programa que calcula o fatorial de um valor fornecido pelo usu�rio
// --------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

// --------------------------------------------------------------------------------------
// Fun��o Principal
// --------------------------------------------------------------------------------------
int main() {

    // Declara��o das vari�veis
    int i, valor;
    long int fatorial {1};

    // Entrada de dados
    cout << "\n";
    cout << "Calculo do fatorial utilizando o laco WHILE \n\n";
    cout << "* Informe o valor desejado: ";
    cin >> valor;

    // La�o para calcular o fatorial
    for ( i = 1; i <= valor; i++) {
        // Calcula o fatorial
        fatorial *= i;
    }

    // Exibe o resultado
    cout << "\n=> Fatorial de " << valor << " : " << fatorial << "\n\n";

    // Fim do programa
    return 0;
}
