//Exercicio 07 - Lista de Exerc�cios 1
//

#include <iostream>
#include <iomanip>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    //Declara��o das v�riaveis
    float F, K;

    //Entrada dos dados
    cout << "* Insira um valor de uma temperatura em graus Fahrenheit: ";
    cin >> F;

    K = (F - 32) * 5/9 + 273,15;

    //Formata��o do resultado
    cout << setprecision(4);
    cout << setiosflags(ios::showpoint);

    // Exibe o resultado
    cout << "\n";
    cout << "Convertendo o valor inserido de Fahrenheit para Kelvin fica: " << K << endl;

    // Fim do programa
    return 0;

}
