// ------------------------------------------------------------------------------------
// Exemplo 09: programa que demonstra o uso de argumentos na fun��o principal
// ------------------------------------------------------------------------------------

#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

// ------------------------------------------------------------------------------------
// Fun��o Principal
// ------------------------------------------------------------------------------------
int main(int argc, char* argv[]) {

    cout << "\n";
    cout << "Exemplo de Argumentos da Funcao\n\n";

    // Se o usu�rio n�o forneceu o n�mero correto de argumentos
    if (argc != 4) {
        // Exibe uma mensagem de erro
        cerr << "Uso: " << argv[0] << " somar/subtrair num1 num2" << "\n\n";
        // Encerra o programa
        return 1;
    }

    // Recupera o valor de cada argumento
    const char *operacao = argv[1];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);

    // Realiza a soma dos valores
    if (!strcmp(operacao, "somar")) {
        cout << "Soma: " << num1 + num2 << endl;
    } else if (!strcmp(operacao, "subtrair")) {
        cout << "Subtracao: " << num1 - num2 << endl;
    }
    else {
        cout << "Operacao Invalida!" << endl;
    }

    cout << endl;

    // Fim do Programa
    return 0;
}
