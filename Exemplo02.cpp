// ---------------------------------------------------------------------------
// Exemplo 02: programa que demonstra como declarar uma estrutura com fun��es
// ---------------------------------------------------------------------------

#include <iostream>

using namespace std;

// ---------------------------------------------------------------------------

// Defini��o da estrutura Ponto - ela � utilizada para armazenar pontos de uma coordenada
struct Ponto {
    int x;
    int y;

    // ---------------------------------------------------------------------------

    // Fun��o para definir as coordenadas do ponto
    void defineCoordenadas(int px, int py) {
        x = px;
        y = py;
    }

    // Fun��o para exibir as coordenadas do ponto
    // O modificador const indica que ela n�o modifica so membros da estrutura
    void exibeCoordenadas(string P) const {
        cout << "Coordenadas do ponto " << P << ": (" << x << ", " << y << ")\n";
    }
};

// ---------------------------------------------------------------------------
// Fun��o Principal
// ---------------------------------------------------------------------------
int main() {
    cout << "\n";
    cout << "Declaracao de Estrutura com Atributos e Funcoes\n\n";

    // Declara��o de duas vari�veis do tipo Ponto
    Ponto p1;

    // Executa a fun��o que define as coordenadas do ponto
    p1.defineCoordenadas(10, 20);


    // Executa a fun��o que exibe as coordenadas do ponto
    p1.exibeCoordenadas("P1");

    cout << endl;

    // Fim do programa
    return 0;
}

