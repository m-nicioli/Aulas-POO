//Exercicio 43 - Lista de Exerc�cios 1
//
// Escreva um programa que leia 5 n�meros e informe a soma e a m�dia
// dos n�meros.
//
#include <iostream>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------
int main() {

    // Declara��o das vari�veis
    int num, soma = 0;
    float media;

    // Leitura dos 5 n�meros e c�lculo da soma
    cout << "Digite 5 numeros: " << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << "Numero " << i << ": ";
        cin >> num;
        soma += num;

    }

       media = soma / 5.0;

    // Exibe a soma e a m�dia
    cout << "Soma: " << soma << endl;
    cout << "Media: " << media << endl;

    return 0;


}
