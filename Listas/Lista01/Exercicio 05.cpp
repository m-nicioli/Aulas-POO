//Exercicio 05 - Lista de Exerc�cios 1
//

#include <iostream>
#include <iomanip>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    //Declara��o das v�riaveis
    float F, C, K;

    //Entrada dos dados
    cout << "* Insira um valor de uma temperatura em graus Celsius: ";
    cin >> C;

    F = (9 * C + 160)/5;
    K = C + 273,5;

    //Formata��o do resultado
    cout << setprecision(3);
    cout << setiosflags(ios::showpoint);

    // Exibe o resultado
    cout << "\n";
    cout << "Convertendo o valor inserido de Celsius para Fahrenheit fica: " << F << endl;
    cout << "E convertendo o valor inserido de Celsius para Kelvin fica: " << K << endl;

    // Fim do programa
    return 0;

}
