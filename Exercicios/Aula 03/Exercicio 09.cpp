//Exercicio 09: cálculo de MDC utilizando o DO WHILE
//
// Considere o seguinte cenário: "Em um jogo para duas ou mais pessoas, existem
// X peças quadradas e Y peças triangulares. Sabendo que, para jogar esse jogo,
// as peças precisam ser igualmente distribuídas e não deve sobrar nenhuma delas,
// qual é o máximo de participantes possíveis no jogo?
// Escreva um programa para resolver este problema.
// --------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

// --------------------------------------------------------------------------------------
// Função Principal
// --------------------------------------------------------------------------------------
int main() {

    // Declaração das variáveis
    int quadradas, triangulares, a, b, r;

    // Entrada de dados
    cout << "\n";
    cout << "Calculo do numero maximo de participantes de um jogo \n\n";
    cout << "* Informe o total de pecas quadradas: ";
    cin >> quadradas;
    cout << "* Informe o total de pecas triangulares: ";
    cin >> triangulares;

    // Calcula o MDC utilizando o algoritmo de Euclides
    a = quadradas;
    b = triangulares;

    do {
        r = a % b;
        a = b;
        b = r;
    } while ( b != 0 );

    // Exibe o resultado
    cout << "\n => Considerando " << quadradas << " pecas quadradas e ";
    cout << triangulares << " pecas triangulares, devemos ter no maximo ";
    cout << a << " participantes. \n\n";

    // Fim do programa
    return 0;

}
