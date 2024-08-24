//Exercicio 12 - Lista de Exercícios 1
//

#include <iostream>

using namespace std;

// -------------------------------------------------------------------------------------------------------
// Função Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    // Declaração das variáveis
    double altura, pesoIdeal, pesoAtual;
    char sexo;

    // Solicita ao usuário que insira a altura e o sexo
    cout << "Digite a altura (em metros): ";
    cin >> altura;
    cout << "Digite o sexo (M para masculino, F para feminino): ";
    cin >> sexo;

    // Verifica se o sexo é masculino ou feminino e calcula o peso ideal
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = (72.7 * altura) - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    } else {
        cout << "Sexo invalido." << endl;
        return 1;
    }

    // Solicita o peso atual do usuário
    cout << "Digite o peso atual (em kg): ";
    cin >> pesoAtual;

    // Exibe o peso ideal calculado
    cout << "\nPeso ideal: " << pesoIdeal << " kg" << endl;

    // Verifica se a pessoa está dentro, acima ou abaixo do peso ideal
    if (pesoAtual == pesoIdeal) {
        cout << "Voce está no peso ideal." << endl;
    } else if (pesoAtual > pesoIdeal) {
        cout << "Voce está acima do peso ideal." << endl;
    } else {
        cout << "Voce esta abaixo do peso ideal." << endl;
    }

    return 0;
}
