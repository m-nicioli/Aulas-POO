//Exercicio 12 - Lista de Exerc�cios 1
//

#include <iostream>

using namespace std;

// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    // Declara��o das vari�veis
    double altura, pesoIdeal, pesoAtual;
    char sexo;

    // Solicita ao usu�rio que insira a altura e o sexo
    cout << "Digite a altura (em metros): ";
    cin >> altura;
    cout << "Digite o sexo (M para masculino, F para feminino): ";
    cin >> sexo;

    // Verifica se o sexo � masculino ou feminino e calcula o peso ideal
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        cout << "Sexo invalido." << endl;
        return 1;
    }

    // Solicita o peso atual do usu�rio
    cout << "Digite o peso atual (em kg): ";
    cin >> pesoAtual;

    // Exibe o peso ideal calculado
    cout << "\nPeso ideal: " << pesoIdeal << " kg" << endl;

    // Verifica se a pessoa est� dentro, acima ou abaixo do peso ideal
    if (pesoAtual == pesoIdeal) {
        cout << "Voce est� no peso ideal." << endl;
    } else if (pesoAtual > pesoIdeal) {
        cout << "Voce est� acima do peso ideal." << endl;
    } else {
        cout << "Voce esta abaixo do peso ideal." << endl;
    }

    return 0;
}
