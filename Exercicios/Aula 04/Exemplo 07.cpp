// -----------------------------------------------------------------------
// Exemplo 07: relacionamento entre arrays e ponteiros
// -----------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

// -----------------------------------------------------------------------
// Prot�tipos das fun��es
// -----------------------------------------------------------------------

void imprime1(int numeros[], size_t tamanho, string nome);
void imprime2(int *numeros, size_t tamanho, string nome);

// -----------------------------------------------------------------------
// Fun��o principal
// -----------------------------------------------------------------------
int main() {
    cout << "\n";
    cout << "Relacionamento entre Arrays e Ponteiros \n\n";

    // Declara��o e inicializa��o de tr�s arrays
    int numeros1[] = {1, 2, 3, 4, 5};
    int numeros2[] = {6, 7, 8, 9, 10};
    int numeros3[] = {11, 12, 13, 14, 15};

    // Obt�m o total de elementosde cada array
    size_t tamanho1 =  sizeof(numeros1) / sizeof(numeros1[0]);
    size_t tamanho2 = sizeof(numeros2) / sizeof(numeros2[0]);
    size_t tamanho3 = sizeof(numeros3) / sizeof(numeros3[0]);

    // -----------------------------------------------------------------------

    // Executa a fun��o que exibe o conte�do do primeiro array,
    // utilizando a nota��o de subscrito de array
    imprime1(numeros1, tamanho1, "<numeros1>");

    // -----------------------------------------------------------------------

    // Executa a fun��o que exibe o conte�do do primeiro array,
    // utilizando aritm�tica de ponteiros
    imprime2(numeros2, tamanho2, "<numeros2>");

    // -----------------------------------------------------------------------

    // Declara um ponteiro para o terceiro array
    int *ptr3 = numeros3;

    // Exibe o conte�do do terceiro array utilizando <ptr3> e a nota��o de subscrito de array

    cout << "3. <*ptr3>...: [";

    for (int i = 0; i < tamanho3; ++i) {
        cout << ptr3[i] << ", ";
    } else {
        cout << ptr3[i] << "]" << endl;
    }

    // -----------------------------------------------------------------------

    cout << "\n";

    // Fim do programa
    return 0;
}

// -----------------------------------------------------------------------
// Defini��o das fun��es
// -----------------------------------------------------------------------

// Fun��o que imprime o conte�do do array (vers�o com array)
    void imprime1(int numeros[], size_t tamanho, string nome) {
        cout << "1. " << nome << ": [";

        for (int i = 0; i < tamanho; ++i) {
            if (i < tamanho - 1)
                cout << numeros[1] << ", ";
        } else {
        cout << ptr3[i] << "]" << endl;
        }
    }
    // -----------------------------------------------------------------------

    // Fun��o que imprime o conte�do do array (vers�o com ponteiros)
    void imprime1(int numeros[], size_t tamanho, string nome) {
        cout << "2. " << nome << ": [";

        for (int i = 0; i < tamanho; ++i) {
            if (i < tamanho - 1)
                cout << *(numeros + i) << ", ";
        } else {
        cout << *(numeros + i) << "]" << endl;
        }
    }
