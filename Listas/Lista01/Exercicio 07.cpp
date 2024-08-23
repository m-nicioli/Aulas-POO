//Exercicio 07 - Lista de Exercícios 1
//

#include <iostream>
#include <iomanip>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Função Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    //Declaração das váriaveis
    float F, K;

    //Entrada dos dados
    cout << "* Insira um valor de uma temperatura em graus Fahrenheit: ";
    cin >> F;

    K = (F - 32) * 5/9 + 273,15;

    //Formatação do resultado
    cout << setprecision(4);
    cout << setiosflags(ios::showpoint);

    // Exibe o resultado
    cout << "\n";
    cout << "Convertendo o valor inserido de Fahrenheit para Kelvin fica: " << K << endl;

    // Fim do programa
    return 0;

}
