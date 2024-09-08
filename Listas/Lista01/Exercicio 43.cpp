//Exercicio 43 - Lista de Exercícios 1
//
// Escreva um programa que leia 5 números e informe a soma e a média
// dos números.
//
#include <iostream>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Função Principal
// -------------------------------------------------------------------------------------------------------
int main() {

    // Declaração das variáveis
    int num, soma = 0;
    float media;

    // Leitura dos 5 números e cálculo da soma
    cout << "Digite 5 numeros: " << endl;
    for (int i = 1; i <= 5; ++i) {
        cout << "Numero " << i << ": ";
        cin >> num;
        soma += num;

    }

       media = soma / 5.0;

    // Exibe a soma e a média
    cout << "Soma: " << soma << endl;
    cout << "Media: " << media << endl;

    return 0;


}
