//Exercicio 75 - Lista de Exercícios 1
//
// Escreva um programa que possua uma função que receba um argumento
// do tipo inteiro diferente de zero e retorne P, caso ele seja
// positivo, ou retorne N, caso ele seja negativo. O programa deve
// solicitar a entrada desse argumento para o usuário e apresentar
// uma mensagem com o valor retornado pela função.
//
#include <iostream>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Função
// -------------------------------------------------------------------------------------------------------

// Função que retorna 'P' para números positivos e 'N' para números negativos
char verificaNumero(int num) {
    if (num > 0) {
        return 'P';
    } else {
        return 'N';
    }
}

// -------------------------------------------------------------------------------------------------------
// Função Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    int numero;

    // Solicita ao usuário para inserir um número diferente de zero
    cout << "Digite um numero inteiro diferente de zero: ";
    cin >> numero;

    // Verifica se o número é diferente de zero
    if (numero == 0) {
        cout << "O numero deve ser diferente de zero!" << endl;
        return 1; // Finaliza o programa com erro
    }

    // Chama a função e apresenta o resultado
    char resultado = verificaNumero(numero);
    if (resultado == 'P') {
        cout << "O numero e positivo." << endl;
    } else {
        cout << "O numero e negativo." << endl;
    }

    return 0;
}
