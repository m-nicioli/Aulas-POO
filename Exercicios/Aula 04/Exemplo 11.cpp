// ---------------------------------------------------------------------
// Exemplo 11: exemplo de uso de strcpy e strncpy
// ---------------------------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

// ---------------------------------------------------------------------
// Função principal
// ---------------------------------------------------------------------
int main() {
    cout << "\n";
    cout << "Exemplo de uso de strcpy() e strncpy()\n\n";

    // Declara os arrays de caracteres
    char parte1[50] = "Instituto";
    char parte2[] = "Federal";
    char texto[20] = "";

    // Concatena <parte2> dentro de <parte1>
    strcpy(parte1, parte2);

    // Concatena somente os 5 primeiros caracteres de <parte1> dentro de <texto>
    strncpy(texto, parte1, 5);

    // Apresenta o resultado
    cout << "-> Parte 1: " << parte1 << endl;
    cout << "-> Parte 2: " << parte2 << endl;
    cout << "-> Texto: " << texto << endl;

    cout << endl;

    return 0;
}
