// ---------------------------------------------------------------------
// Exemplo 09: exemplo de array de ponteiros para fun��es
// ---------------------------------------------------------------------

#include <iostream>

using namespace std;

// ---------------------------------------------------------------------
// Prot�tipos de Fun��es
// ---------------------------------------------------------------------

void cantar(int);
void dancar(int);
void enrolar(int);

// ---------------------------------------------------------------------
// Fun��o Principal
// ---------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << "Array de Ponteiros para Funcoes\n\n";

    // Declara e inicializa um array de 3 ponteiros para fun��es, que
    // aceitam um argumento inteiro e n�o retornam nenhum valor
    void (*funcoes[3])(int) = {
        cantar,
        dancar,
        enrolar
    };

    // Controla a op��o do usu�rio
    int opcao;

    // Recebe a entrada do usu�rio
    cout << ">> Informe a opcao desejada (0, 1 ou 2): ";
    cin >> opcao;
    cout << endl;

    // Loop para processar a escolha do usu�rio
    while ((opcao >= 0) && (opcao < 3)) {

        // Executa a fun��o de acordo com a op��o escolhida,
        // passando o valor da op��o como argumento
        (*funcoes[opcao])(opcao);

        // Recebe a entrada do usu�rio novamente
        cout << ">> Informe a opcao desejada (0, 1, 2 ou 3 para sair): ";
        cin >> opcao;
        cout << endl;
    }

    return 0;
}

// ---------------------------------------------------------------------
// Defini��o das fun��es
// ---------------------------------------------------------------------

    // Fun��o cantar()
    void cantar(int opcao) {
        cout << " * Voce escolheu a opcao " << opcao << ". Vamos cantar!\n\n";
    }

    // ---------------------------------------------------------------------

    // Fun��o dan�ar()
    void dancar(int opcao) {
        cout << " * Voce escolheu a opcao " << opcao << ". Vamos dancar!\n\n";
    }

    // ---------------------------------------------------------------------

    // Fun��o enrola()
    void enrolar(int opcao) {
        cout << " * Voce escolheu a opcao " << opcao << ". Vamos enrolar!\n\n";
    }
