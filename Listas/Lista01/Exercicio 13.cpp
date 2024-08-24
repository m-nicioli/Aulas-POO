//Exercicio 13 - Lista de Exercícios 1
//

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


// -------------------------------------------------------------------------------------------------------
// Função Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    // Declaração das variáveis
    float area, litrosNecessarios, latasNecessarias, precoTotal;

    // Solicita ao usuário o tamanho da área em metros quadrados
    cout << "Digite o tamanho da area a ser pintada (em metros quadrados): ";
    cin >> area;

    // Calcula a quantidade de litros necessários
    litrosNecessarios = area / 3;

    // Calcula a quantidade de latas necessárias (arredondando para cima)
    latasNecessarias = ceil(litrosNecessarios / 18);

    // Calcula o preço total
    precoTotal = latasNecessarias * 80.0;

    // Exibe os resultados formatados com duas casas decimais
    cout << fixed << setprecision(2);
    cout << "\nQuantidade de latas de tinta: " << latasNecessarias << endl;
    cout << "Preco total: R$ " << precoTotal << endl;

    return 0;
}
