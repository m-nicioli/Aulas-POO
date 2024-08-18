//Exercicio 08 - Lista 01
//
// Escreva um programa para calcular e apresentar o valor do volume de uma lata de
// �leo. O valor do volume pode ser obtido pela f�rmula V = 3.141516 x R x R x a, onde
// V corresponde ao valor do volume, R corresponde ao valor do raio e A corresponde ao
// valor da altura. O usu�rio dever� fornecer os valores do raio e da altura. Para
// apresentar o resultado, considere a utiliza��o de duas casas decimais.
// --------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;

// --------------------------------------------------------------------------------------
// Fun��o Principal
// --------------------------------------------------------------------------------------
int main() {

    // Declara��o das vari�veis
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

    // C�lculo do volume
    V = PI * R * R * A;

    // Formata��o do resultado
    cout << "\n";
    cout << "O valor do volume da lata oleo, nesse caso, eh entao de: " << setprecision(2) << V << "\n\n";
    cout << "\n";

    // Fim do programa
    return 0;
}
