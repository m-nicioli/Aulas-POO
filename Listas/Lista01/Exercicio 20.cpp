//Exercicio 20 - Lista de Exerc�cios 1
//
// Escreva um programa que pe�a a entrada de uma letra e verifique
// se ela � vogal ou consoante.
//
#include <iostream>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    // Declara��o das vari�veis
    int N1, N2, N3;

    // Solicita ao usu�rio que insira tr�s n�meros inteiros
    cout << "Digite o primeiro numero inteiro: ";
    cin >> N1;
    cout << "Digite o segundo numero inteiro: ";
    cin >> N2;
    cout << "Digite o terceiro numero inteiro: ";
    cin >> N3;

    // Verifica e imprime os n�meros em ordem decrescente
    if (N1 >= N2 && N1 >= N3) {
        // N1 � o maior
        if (N2 >= N3) {
            cout << "\n";
            cout << "Ordem decrescente: " << N1 << ", " << N2 << ", " << N3 << endl;
        } else {
            cout << "Ordem decrescente: " << N1 << ", " << N3 << ", " << N2 << endl;
        }
    } else if (N2 >= N1 && N2 >= N3) {
        // N2 � o maior
        if (N1 >= N3) {
            cout << "\n";
            cout << "Ordem decrescente: " << N2 << ", " << N1 << ", " << N3 << endl;
        } else {
            cout << "\n";
            cout << "Ordem decrescente: " << N2 << ", " << N3 << ", " << N1 << endl;
        }
    } else {
        // N3 � o maior
        if (N1 >= N2) {
            cout << "\n";
            cout << "Ordem decrescente: " << N3 << ", " << N1 << ", " << N2 << endl;
        } else {
            cout << "\n";
            cout << "Ordem decrescente: " << N3 << ", " << N2 << ", " << N1 << endl;
        }
    }

    return 0;
}
