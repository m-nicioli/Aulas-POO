//Exercicio 11 - Lista de Exerc�cios 1
//

#include <iostream>
#include <cmath>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    int N1, N2;
    float N3;

    cout << "Digite o primeiro n�mero inteiro: ";
    cin >> N1;
    cout << "Digite o segundo n�mero inteiro: ";
    cin >> N2;
    cout << "Digite o n�mero real: ";
    cin >> N3;

    int produto = (N1 * 2) * (N2 / 2);
    double soma = (N1 * 3) + N3;
    double cubo = pow(N3, 3);

    // Exibe os resultados
    cout << "\nO produto do dobro do primeiro com metade do segundo: " << produto << endl;
    cout << "A soma do triplo do primeiro com o terceiro: " << soma << endl;
    cout << "O terceiro elevado ao cubo: " << cubo << endl;

    return 0;
}
