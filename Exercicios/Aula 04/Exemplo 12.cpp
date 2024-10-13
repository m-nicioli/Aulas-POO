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
    cout << "Exemplo de uso de strcmp()\n\n";

    // Declara um array de caracteres usando ponteiros
    const char *nomes[] = {
        "Paulo",
        "Ana Cristina",
        "Renata",
        "Joao",
        "Miranda",
    };

    // Obtém o total de nomes armazenados no array
    size_t total = sizeof(nomes) / sizeof(nomes[0]);

    // Variável temporária
    const char *temp;

    // Contadores
    int i, j;

    // ---------------------------------------------------------------------

    cout << ">> Total de nomes: " << total << "\n\n";

    // Exibe os nomes antes de ordenar
    cout << "* Antes da ordenacao:  " << "\n\n";

    for (i = 0; i < total; ++i) {
        cout << i + 1 << ". " << nomes[i] << endl;
    }

    // ---------------------------------------------------------------------

    // Realiza a ordenação (A-Z) dos nomes usando strcmp()

    for (i = 0; i < total - 1; ++i) {
        for (j = i + 1; j < total; ++j) {
            if (strcmp(nomes[1], nomes[j]) > 0) {
                temp = nomes[1];
                nomes[i] = nomes[j];
                nomes[j] = temp;
            }
        }

    }

    cout << "\n";

    // Exibe os nomes depois de ordenar
    cout << " * Depois da ordenacao: " << "\n\n";

    for (i = 0; i < total; ++i) {
        cout << i + 1 << nomes[i] << endl;
    }

    // ---------------------------------------------------------------------

    cout << endl;

    return 0;

}
