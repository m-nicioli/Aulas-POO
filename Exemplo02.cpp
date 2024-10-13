// ---------------------------------------------------------------------------
// Exemplo 02: programa que demonstra como declarar uma estrutura com funções
// ---------------------------------------------------------------------------

#include <iostream>

using namespace std;

// ---------------------------------------------------------------------------

// Definição da estrutura Ponto - ela é utilizada para armazenar pontos de uma coordenada
struct Ponto {
    int x;
    int y;

    // ---------------------------------------------------------------------------

    // Função para definir as coordenadas do ponto
    void defineCoordenadas(int px, int py) {
        x = px;
        y = py;
    }

    // Função para exibir as coordenadas do ponto
    // O modificador const indica que ela não modifica so membros da estrutura
    void exibeCoordenadas(string P) const {
        cout << "Coordenadas do ponto " << P << ": (" << x << ", " << y << ")\n";
    }
};

// ---------------------------------------------------------------------------
// Função Principal
// ---------------------------------------------------------------------------
int main() {
    cout << "\n";
    cout << "Declaracao de Estrutura com Atributos e Funcoes\n\n";

    // Declaração de duas variáveis do tipo Ponto
    Ponto p1;

    // Executa a função que define as coordenadas do ponto
    p1.defineCoordenadas(10, 20);


    // Executa a função que exibe as coordenadas do ponto
    p1.exibeCoordenadas("P1");

    cout << endl;

    // Fim do programa
    return 0;
}

