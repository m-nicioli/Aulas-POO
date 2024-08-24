//Exercicio 17 - Lista de Exercícios 1
//
// Escreva um programa que peça a entrada de dois números
// inteiros e imprima o maior deles.
//
#include <iostream>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Função Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    // Declaração das variáveis
    int N1, N2;

    // Solicita ao usuário que insira dois números inteiros
    cout << "Digite o primeiro numero inteiro: ";
    cin >> N1;
    cout << "Digite o segundo numero inteiro: ";
    cin >> N2;

    // Compara os dois números e imprime o maior
    if (N1 > N2) {
        cout << "O maior numero é: " << N1 << endl;
    } else if (N1 > N1) {
        cout << "O maior numero é: " << N2 << endl;
    } else {
        cout << "Os dois numeros são iguais." << endl;
    }

    return 0;
}
