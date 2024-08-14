//Exercicio 08: c�lculo de fatorial utilizando o WHILE
//
// Programa que calcula o fatorial de um valor fornecido pelo usu�rio.
// --------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

// --------------------------------------------------------------------------------------
// Fun��o Principal
// --------------------------------------------------------------------------------------
int main() {

    //Declara��o das vari�veis
    int i, valor;
    long int fatorial{1};

    // Entrada dos dados
    cout << "\n";
    cout << "Calculo do fatorial utilizando o laco WHILE \n\n";
    cout << "* Informe o valor desejado: ";
    cin >> valor;

    // Inicializa o contador
    i = 1;

    // La�o para calcular o fatorial
    while ( i <= valor ) {

        // Calcula o fatorial
        fatorial *= i;

        // Incrementa o valor
        i++;
    }

    // Exibe o resultado
    cout << "\n => Fatorial de " << valor <<" : " << fatorial << "\n\n";

    // Fim do programa
    return 0;
}
