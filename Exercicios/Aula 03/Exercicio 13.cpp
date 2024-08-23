// Exercício 13: exemplo de sobrecarga de funções
//
// Programa que demonstra a utilização de sobrecarga de funções
// -----------------------------------------------------------------------------------

#include <iostream>

using namespace std;

// -----------------------------------------------------------------------------------
// Protótipos de função
// -----------------------------------------------------------------------------------

void imprime();
void imprime(int valor);
void imprime(float valor);
void imprime(int N1, float N2);

// -----------------------------------------------------------------------------------
// Função Principal
// -----------------------------------------------------------------------------------
int main() {
    cout << "\n";

    // Utiliza as funções sobrecarregadas
    imprime();
    imprime(10);
    imprime(10.99f);
    imprime(1, 0.99f);

    cout << "\n";

    // Fim do programa
    return 0;
}

// -----------------------------------------------------------------------------------
// Definição das funções
// -----------------------------------------------------------------------------------

// Função sobrecarregada sem parâmetros
void imprime() {
    cout << "Funcao sem argumentos." << endl;
}
// -----------------------------------------------------------------------------------

// Função sobrecarregada, com um parâmetro inteiro
void imprime(int valor) {
    cout << "Funcao com argumento inteiro: " << valor << endl;
}
// -----------------------------------------------------------------------------------
// Função sobrecarregada, com um parâmetro real
void imprime(float valor) {
    cout << "Funcao com argumento real: " << valor << endl;
}
// -----------------------------------------------------------------------------------

// Função sobrecarregada, com dois parâmetros
void imprime(int N1, float N2) {
    cout << "Primeiro valor: " << N1 << endl;
    cout << "Segundo valor: " << N2 << endl;
}
