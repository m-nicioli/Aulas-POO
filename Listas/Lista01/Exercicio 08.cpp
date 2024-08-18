//Exercicio 08 - Lista 01
//
// Escreva um programa para calcular e apresentar o valor do volume de uma lata de
// óleo. O valor do volume pode ser obtido pela fórmula V = 3.141516 x R x R x a, onde
// V corresponde ao valor do volume, R corresponde ao valor do raio e A corresponde ao
// valor da altura. O usuário deverá fornecer os valores do raio e da altura. Para
// apresentar o resultado, considere a utilização de duas casas decimais.
// --------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;

// --------------------------------------------------------------------------------------
// Função Principal
// --------------------------------------------------------------------------------------
int main() {

    // Declaração das variáveis
    const float PI = 3.141516;
    float R, A, V;


    // Entrada de dados
    cout << "-------------------------------------------" << endl;
    cout << "     PROGRAMA 08 - CALCULO DE VOLUME     " << endl;
    cout << "-------------------------------------------" << endl;
    cout << "\n";
    cout << "* Informe o valor desejado para o raio: ";
    cin >> R;
    cout << "* Informe o valor desejado para a altura: ";
    cin >> A;

    // Cálculo do volume
    V = PI * R * R * A;

    // Formatação do resultado
    cout << "\n";
    cout << "O valor do volume da lata oleo, nesse caso, eh entao de: " << setprecision(2) << V << "\n\n";
    cout << "\n";

    // Fim do programa
    return 0;
}
