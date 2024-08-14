//Exercicio 10: cálculo de fatorial utilizando o FOR
//
// Programa que calcula o fatorial de um valor fornecido pelo usuário
// --------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

// --------------------------------------------------------------------------------------
// Função Principal
// --------------------------------------------------------------------------------------
int main() {

    // Declaração das variáveis
    int i, valor;
    long int fatorial {1};

    // Entrada de dados
    cout << "\n";
    cout << "Calculo do fatorial utilizando o laco WHILE \n\n";
    cout << "* Informe o valor desejado: ";
    cin >> valor;

    // Laço para calcular o fatorial
    for ( i = 1; i <= valor; i++) {
        // Calcula o fatorial
        fatorial *= i;
    }

    // Exibe o resultado
    cout << "\n=> Fatorial de " << valor << " : " << fatorial << "\n\n";

    // Fim do programa
    return 0;
}
