//Exercicio 15: exemplo de register
//
// Escreva um programa que demonstra a utiliza��o de register.
//

#include <iostream>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    // Declara a vari�vel utilizando register
    register int i;

    cout << "\n";

    // Loop para demonstrar  a utiliza��o de register
    for (i = 0; i < 5; ++i) {
        cout << "Valor do contador: " << i << "\n";
    }

    cout << "\n";

    // Fim do programa
    return 0;
}
