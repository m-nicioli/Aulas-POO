//Exercicio 75 - Lista de Exerc�cios 1
//
// Escreva um programa que possua uma fun��o que receba um argumento
// do tipo inteiro diferente de zero e retorne P, caso ele seja
// positivo, ou retorne N, caso ele seja negativo. O programa deve
// solicitar a entrada desse argumento para o usu�rio e apresentar
// uma mensagem com o valor retornado pela fun��o.
//
#include <iostream>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Fun��o
// -------------------------------------------------------------------------------------------------------

// Fun��o que retorna 'P' para n�meros positivos e 'N' para n�meros negativos
char verificaNumero(int num) {
    if (num > 0) {
        return 'P';
    } else {
        return 'N';
    }
}

// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    int numero;

    // Solicita ao usu�rio para inserir um n�mero diferente de zero
    cout << "Digite um numero inteiro diferente de zero: ";
    cin >> numero;

    // Verifica se o n�mero � diferente de zero
    if (numero == 0) {
        cout << "O numero deve ser diferente de zero!" << endl;
        return 1; // Finaliza o programa com erro
    }

    // Chama a fun��o e apresenta o resultado
    char resultado = verificaNumero(numero);
    if (resultado == 'P') {
        cout << "O numero e positivo." << endl;
    } else {
        cout << "O numero e negativo." << endl;
    }

    return 0;
}
