//Exercicio 14 - Lista de Exerc�cios 1
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
    float peso, excesso {0.0}, multa {0.0}, limitePeso {50.0}, valorMultaPorQuilo {4.0};

    // Solicita ao usu�rio que insira o peso total dos peixes
    cout << "Digite o peso total dos peixes (em quilos): ";
    cin >> peso;

    // Verifica se h� excesso de peso
    if (peso > limitePeso) {
        excesso = peso - limitePeso;
        multa = excesso * valorMultaPorQuilo;
    }

    // Exibe os resultados
    cout << fixed << setprecision(2); // Formata a sa�da com duas casas decimais
    cout << "\nExcesso de peso: " << excesso << " kg" << endl;
    cout << "Multa a pagar: R$ " << multa << endl;

    return 0;
}
