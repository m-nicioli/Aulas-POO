// -------------------------------------------------------------------------
// Exemplo 15: exemplo de uso de strtok e de aloca��o din�mica
// -------------------------------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

// -------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------
int main() {
    cout << "\n";
    cout << "Exemplo de uso de strtok() e de Alocacao Dinamica\n\n";

    // Array com o texto desejado
    char texto[] = "Minha-frase-de-token";

    // Caractere de verifica��o
    char separador[] = "-";

    // Tamanho inicial do array de tokens;
    int capacidade = 2;

    // Array de ponteiros, utilizado para armazenar os tokens
    char **tokens = nullptr;

    // Inicialmente, aloca espa�o para 2 tokens
    tokens = new char*[capacidade];

    // Ponteiro para o token
    char *tokenPtr;

    // Contadores
    int i, total;

    // -------------------------------------------------------------------------

    // Exibe o texto inicial
    cout << "* Texto inicial: " << texto << "\n\n";

    // Retorna o primeiro token
    tokenPtr = strtok(texto, separador);

    // Inicializa o contador de tokens
    total = 0;

    // Loop para obter os tokens at� que o ponteiro <tokenPtr> seja NULL
    while (tokenPtr != NULL) {

        // Se voc� chegou no limite do array que armazena os tokens
        if (total >= capacidade) {

            // Duplica o tamanho do array de tokens
            capacidade *= 2;

            // Criar e alocar a mem�ria para um array tempor�rio
            char **temp = new char*[capacidade];

            // Copia os ponteiros antigos para o array tempor�rio
            for (i = 0; i < total; ++i) {
                temp[i] = tokens[i];
            }

            // Libera a mem�ria antiga
            delete[] tokens;

            // Aponta o array de tokens para o array tempor�rio
            tokens = temp;
        }

        // Armazena o tokens no array de tokens
        tokens[total] = tokenPtr;

        // Incrementa o contador do array de tokens
        ++total;

        // Obt�m o pr�ximo token
        tokenPtr = strtok(NULL, separador);
    }

    // -------------------------------------------------------------------------

    cout << " * Foram gerados " << total << " tokens: \n\n";

    // Exibe os tokens que foram gerados
    for ( i = 0; i < total; ++i) {
        cout << i + 1 << ". -> " << tokens[i] << endl;
    }

    cout << endl;

    return 0;
}

