// ------------------------------------------------------------------------------------
// Exercicio 02: Exemplo de array bidimensional
//
// Programa que demonstra como utilizar uma matris para a entrada de notas
//
// ------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>


using namespace std;


// Total de linhas e colunas
#define LINHAS 10
#define COLUNAS 4

// ------------------------------------------------------------------------------------
// Fun��o principal
// ------------------------------------------------------------------------------------
int main() {
    cout << "\n";
    cout << "Exemplo de Array Bidimensional\n\n";

    // Declara as vari�veis para controle dos la�os
    int i, j;

    // Declara a matriz para entrada das notas
    // e m�dia do aluno
    float notas[LINHAS][COLUNAS + 1];

    // Declara as var�aveis para calculo da m�dia do aluno
    float soma;
    float media;

// ------------------------------------------------------------------------------------

    // Entrada das notas
    cout << "* Informe as " << COLUNAS << " notas dos " << LINHAS << " alunos:\n\n";

    // Loop para percorrer cada linhas da matriz
    for (i = 0; i < LINHAS; ++i) {
        cout << "Informe as notas do aluno " << i+1 << ": ";

        // Loop para entrada das notas
        for (j = 0; j < COLUNAS; ++j) {
            // Armazena a nota
            cin >> notas[i][j];
        }
    }

// ------------------------------------------------------------------------------------

    // Calculo da media

    // Loop para percorrer cada linha da matriz
    for (i = 0; i < LINHAS; ++i) {

        // Inicializa o somat�rio das notas do aluno
        soma = 0;

        // Loop para percorrer cada nota
        for (j = 0; j < COLUNAS; ++j) {

        // Atualiza o somat�rio das notas
        soma += notas[i][j];
        }

        // Calcula e armazena a m�dia do aluno
        notas[i][COLUNAS] = soma / COLUNAS;
    }

// ------------------------------------------------------------------------------------

    // Apresenta��o do resultado

    // Formata��o do resultado

    cout << setprecision(2);
    cout << setiosflags(ios::fixed);

    cout << "\n* Resultado final: \n\n";

    // Cabe�alho
    cout << setw(6) << "Aluno";

    for (j = 0; j < COLUNAS; ++j) {
        cout << setw(9) << "Nota " << j+1;
    }

    cout << setw(10) << "Media";
    cout << "\n\n";

    // Loop para percorrer cada linha da matriz
    for (i = 0; i < LINHAS; ++i) {

        // N�mero do aluno
        cout << setw(6) << i+1;

        // Loop para exibir as notas
        for (j = 0; j < COLUNAS; ++j) {

            // Notas do aluno
            cout << setw(10) << notas[i][j];
        }

        // M�dia do aluno
        cout << setw(9) << notas[i][COLUNAS];

        // Passa para a pr�xima linha da tabela
        cout << "\n";
    }

// ------------------------------------------------------------------------------------
    cout << "\n";

    // Fim do programa
    return 0;

}
