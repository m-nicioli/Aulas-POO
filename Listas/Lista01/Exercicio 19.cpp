//Exercicio 19 - Lista de Exerc�cios 1
//
// Escreva um programa que pe�a a entrada de uma letra e verifique
// se ela � vogal ou consoante.
//
#include <iostream>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    // Declara��o da vari�vel
    char letra;

    // Solicita ao usu�rio que insira uma letra
    cout << "Digite uma letra: ";
    cin >> letra;

    letra = tolower(letra);

    // Verifica se a letra � uma vogal ou consoante
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "A letra '" << letra << "' eh uma vogal." << endl;
    } else if ((letra >= 'a' && letra <= 'z') && (letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u')) {
        cout << "A letra '" << letra << "' eh uma consoante." << endl;
    } else {
        cout << "O caractere digitado nao eh uma letra do alfabeto." << endl;
    }

    return 0;
}
