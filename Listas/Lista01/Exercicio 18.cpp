//Exercicio 18 - Lista de Exerc�cios 1
//
// Escreva um programa que pe�a a entrada de um valor
// inteiro e mostre na tela se esse valor � positivo ou negativo.
//
#include <iostream>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    // Declara��o da vari�vel
    int valor;

    // Solicita ao usu�rio que insira um valor inteiro
    cout << "Digite um valor inteiro: ";
    cin >> valor;

    // Verifica se o valor � positivo, negativo ou zero
    if (valor > 0) {
        cout << "\n";
        cout << "O valor eh positivo." << endl;
    } else if (valor < 0) {
        cout << "\n";
        cout << "O valor eh negativo." << endl;
    } else {
        cout << "\n";
        cout << "O valor eh zero." << endl;
    }

    return 0;
}
