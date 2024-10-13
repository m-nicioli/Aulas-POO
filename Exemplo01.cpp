// ---------------------------------------------------------------------------
// Exemplo 01: programa que demonstra como declarar uma estrutura
// ---------------------------------------------------------------------------

#include <iostream>

using namespace std;

// ---------------------------------------------------------------------------

// Defini��o da estrutura Ponto
// Ela � utilizada para armazenar pontos de uma coordenada
struct Ponto {
    int x;
    int y;
};

// ---------------------------------------------------------------------------
// Fun��o Principal
// ---------------------------------------------------------------------------
int main() {
    cout << "\n";
    cout << "Declaracao de Estruturas\n\n";

    // Declara��o de duas vari�veis do tipo Ponto
    Ponto p1;
    Ponto p2;

    // Atribui��o de valores aos membros da primeira estrutura
    p1.x = 10;
    p1.y = 20;

    // Atribui��o de valores aos membros da segunda estrutura
    p2.x = 0;
    p2.y = 100;

    // Acesso aos membros das estruturas
    cout << "Coordenadas do ponto P1: (" << p1.x << ", " << p1.y << ")\n";
    cout << "Coordenadas do ponto P2: (" << p2.x << ", " << p2.y << ")\n\n";

    return 0;
}

