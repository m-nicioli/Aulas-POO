//Exercicio 17 - Lista de Exerc�cios 1
//
// Escreva um programa que pe�a a entrada de dois n�meros
// inteiros e imprima o maior deles.
//
#include <iostream>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    // Declara��o das vari�veis
    int N1, N2;

    // Solicita ao usu�rio que insira dois n�meros inteiros
    cout << "Digite o primeiro numero inteiro: ";
    cin >> N1;
    cout << "Digite o segundo numero inteiro: ";
    cin >> N2;

    // Compara os dois n�meros e imprime o maior
    if (N1 > N2) {
        cout << "O maior numero �: " << N1 << endl;
    } else if (N1 > N1) {
        cout << "O maior numero �: " << N2 << endl;
    } else {
        cout << "Os dois numeros s�o iguais." << endl;
    }

    return 0;
}
