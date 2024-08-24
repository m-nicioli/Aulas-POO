//Exercicio 19 - Lista de Exercícios 1
//
// Escreva um programa que peça a entrada de uma letra e verifique
// se ela é vogal ou consoante.
//
#include <iostream>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Função Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    // Declaração da variável
    char letra;

    // Solicita ao usuário que insira uma letra
    cout << "Digite uma letra: ";
    cin >> letra;

    letra = tolower(letra);

    // Verifica se a letra é uma vogal ou consoante
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        cout << "A letra '" << letra << "' eh uma vogal." << endl;
    } else if ((letra >= 'a' && letra <= 'z') && (letra != 'a' && letra != 'e' && letra != 'i' && letra != 'o' && letra != 'u')) {
        cout << "A letra '" << letra << "' eh uma consoante." << endl;
    } else {
        cout << "O caractere digitado nao eh uma letra do alfabeto." << endl;
    }

    return 0;
}
