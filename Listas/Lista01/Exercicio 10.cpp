//Exercicio 10 - Lista de Exercícios 1
//

#include <iostream>
#include <iomanip>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Função Principal
// -------------------------------------------------------------------------------------------------------
int main() {

    // Declaração das variáveis
    int N1, N2, A, B, X ;

    // Entrada de dados
    cout << "\n";
    cout << "* Digite um numero inteiro para ser armazenado na variavel A: ";
    cin >> N1;
    cout << "* Digite um numero inteiro para ser armazenado na variavel B: ";
    cin >> N2;


    // Armazenamento // Antes da troca
    A = N1;
    B = N2;


    // Exibe o resultado antes da troca
    cout << "\n";
    cout << "Valores antes da troca: " << endl;
    cout << "\n";
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;


    // Troca

    X = A;
    A = B;
    B = X;

    // Exibe o resultado depois da troca
    cout << "\n";
    cout << "\n";
    cout << "Valores depois da troca: " << endl;
    cout << "\n";
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    // Fim do programa
    return 0;

}
