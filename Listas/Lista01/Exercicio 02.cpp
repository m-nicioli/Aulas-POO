//Exercicio 02 - Lista de Exerc�cios 1
//
// Escreva um programa que pe�a para o usu�rio informar um n�mero inteiro e
// ent�o mostre a mensagem: "O n�mero informado foi <n�mero>".
//

#include <iostream>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------
int main() {

    // Declara��o de vari�vel
    int numero;

    cout << "* Insira um numero inteiro: ";
    cin >> numero;
    cout << "O numero informado foi: " << numero << "." << endl;

    // Fim do programa
    return 0;
}
