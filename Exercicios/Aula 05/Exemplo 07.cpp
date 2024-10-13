// ------------------------------------------------------------------------------------
// Exemplo 07: programa para demonstrar o uso de enumerações com escopo
// ------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

// Enumeração para controlar o estado de um jogo
enum class EstadoJogo {
    MenuPrincipal,
    Jogando,
    Pausado,
    GameOver
};

// ------------------------------------------------------------------------------------
// Protótipo das funções
// ------------------------------------------------------------------------------------
void mostrarEstado(EstadoJogo estado);

// ------------------------------------------------------------------------------------
// Função Principal
// ------------------------------------------------------------------------------------
int main() {

    cout << endl;
    cout << "* Exemplo de Enumeracoes\n\n";

    // Declara o enumerador, indicando que o jogo está no menu principal
    EstadoJogo estadoAtual = EstadoJogo::MenuPrincipal;

    // Mostra o estado inicial do jogo
    mostrarEstado(estadoAtual);

    // ------------------------------------------------------------------------------------

    // Simula o término do jogo
    estadoAtual = EstadoJogo::GameOver;

    mostrarEstado(estadoAtual);

    // ------------------------------------------------------------------------------------

    cout << endl;

    // Fim do Programa
    return 0;

}

// ------------------------------------------------------------------------------------
// Definição das funções
// ------------------------------------------------------------------------------------

// Função para exibir o estado do jogo
void mostrarEstado(EstadoJogo estado) {

    switch (estado) {
    case EstadoJogo::MenuPrincipal:
        cout << " >> Voce esta no Menu Principal. " << endl;
        break;
    case EstadoJogo::Jogando:
        cout << " >> O jogo esta em andamento . . . " << endl;
        break;
    case EstadoJogo::Pausado:
        cout << " >> O jogo esta pausado. " << endl;
        break;
    case EstadoJogo::GameOver:
        cout << " >> Game Over!" << endl;
        break;
    default:
        cout << " >> Estado desconhecido! " << endl;
    }
}
