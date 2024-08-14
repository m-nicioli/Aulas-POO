//Exercicio 09: c�lculo de MDC utilizando o DO WHILE
//
// Considere o seguinte cen�rio: "Em um jogo para duas ou mais pessoas, existem
// X pe�as quadradas e Y pe�as triangulares. Sabendo que, para jogar esse jogo,
// as pe�as precisam ser igualmente distribu�das e n�o deve sobrar nenhuma delas,
// qual � o m�ximo de participantes poss�veis no jogo?
// Escreva um programa para resolver este problema.
// --------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

// --------------------------------------------------------------------------------------
// Fun��o Principal
// --------------------------------------------------------------------------------------
int main() {

    // Declara��o das vari�veis
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
