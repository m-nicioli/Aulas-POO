//Exercicio 18 - Lista de Exercícios 1
//
// Escreva um programa que peça a entrada de um valor
// inteiro e mostre na tela se esse valor é positivo ou negativo.
//
#include <iostream>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Função Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    // Declaração da variável
    int valor;

    // Solicita ao usuário que insira um valor inteiro
    cout << "Digite um valor inteiro: ";
    cin >> valor;

    // Verifica se o valor é positivo, negativo ou zero
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
