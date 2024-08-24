//Exercicio 13 - Lista de Exerc�cios 1
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    // Declara��o das vari�veis
    float area, litrosNecessarios, latasNecessarias, precoTotal;

    // Solicita ao usu�rio o tamanho da �rea em metros quadrados
    cout << "Digite o tamanho da area a ser pintada (em metros quadrados): ";
    cin >> area;

    // Calcula a quantidade de litros necess�rios
    litrosNecessarios = area / 3;

    // Calcula a quantidade de latas necess�rias (arredondando para cima)
    latasNecessarias = ceil(litrosNecessarios / 18);

    // Calcula o pre�o total
    precoTotal = latasNecessarias * 80.0;

    // Exibe os resultados formatados com duas casas decimais
    cout << fixed << setprecision(2);
    cout << "\nQuantidade de latas de tinta: " << latasNecessarias << endl;
    cout << "Preco total: R$ " << precoTotal << endl;

    return 0;
}
