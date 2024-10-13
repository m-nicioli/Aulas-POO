// ---------------------------------------------------------------------
// Exemplo 09: exemplo de array de ponteiros para funções
// ---------------------------------------------------------------------

#include <iostream>

using namespace std;

// ---------------------------------------------------------------------
// Protótipos de Funções
// ---------------------------------------------------------------------

void cantar(int);
void dancar(int);
void enrolar(int);

// ---------------------------------------------------------------------
// Função Principal
// ---------------------------------------------------------------------
int main() {

    cout << "\n";
    cout << "Array de Ponteiros para Funcoes\n\n";

    // Declara e inicializa um array de 3 ponteiros para funções, que
    // aceitam um argumento inteiro e não retornam nenhum valor
    void (*funcoes[3])(int) = {
        cantar,
        dancar,
        enrolar
    };

    // Controla a opção do usuário
    int opcao;

    // Recebe a entrada do usuário
    cout << ">> Informe a opcao desejada (0, 1 ou 2): ";
    cin >> opcao;
    cout << endl;

    // Loop para processar a escolha do usuário
    while ((opcao >= 0) && (opcao < 3)) {

        // Executa a função de acordo com a opção escolhida,
        // passando o valor da opção como argumento
        (*funcoes[opcao])(opcao);

        // Recebe a entrada do usuário novamente
        cout << ">> Informe a opcao desejada (0, 1, 2 ou 3 para sair): ";
        cin >> opcao;
        cout << endl;
    }

    return 0;
}

// ---------------------------------------------------------------------
// Definição das funções
// ---------------------------------------------------------------------

    // Função cantar()
    void cantar(int opcao) {
        cout << " * Voce escolheu a opcao " << opcao << ". Vamos cantar!\n\n";
    }

    // ---------------------------------------------------------------------

    // Função dançar()
    void dancar(int opcao) {
        cout << " * Voce escolheu a opcao " << opcao << ". Vamos dancar!\n\n";
    }

    // ---------------------------------------------------------------------

    // Função enrola()
    void enrolar(int opcao) {
        cout << " * Voce escolheu a opcao " << opcao << ". Vamos enrolar!\n\n";
    }
