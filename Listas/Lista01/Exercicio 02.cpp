//Exercicio 02 - Lista de Exercícios 1
//
// Escreva um programa que peça para o usuário informar um número inteiro e
// então mostre a mensagem: "O número informado foi <número>".
//

#include <iostream>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Função Principal
// -------------------------------------------------------------------------------------------------------
int main() {

    // Declaração de variável
    int numero;

    cout << "* Insira um numero inteiro: ";
    cin >> numero;
    cout << "O numero informado foi: " << numero << "." << endl;

    // Fim do programa
    return 0;
}
