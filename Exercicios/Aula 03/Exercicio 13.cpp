// Exerc�cio 13: exemplo de sobrecarga de fun��es
//
// Programa que demonstra a utiliza��o de sobrecarga de fun��es
// -----------------------------------------------------------------------------------

#include <iostream>

using namespace std;

// -----------------------------------------------------------------------------------
// Prot�tipos de fun��o
// -----------------------------------------------------------------------------------

void imprime();
void imprime(int valor);
void imprime(float valor);
void imprime(int N1, float N2);

// -----------------------------------------------------------------------------------
// Fun��o Principal
// -----------------------------------------------------------------------------------
int main() {
    cout << "\n";

    // Utiliza as fun��es sobrecarregadas
    imprime();
    imprime(10);
    imprime(10.99f);
    imprime(1, 0.99f);

    cout << "\n";

    // Fim do programa
    return 0;
}

// -----------------------------------------------------------------------------------
// Defini��o das fun��es
// -----------------------------------------------------------------------------------

// Fun��o sobrecarregada sem par�metros
void imprime() {
    cout << "Funcao sem argumentos." << endl;
}
// -----------------------------------------------------------------------------------

// Fun��o sobrecarregada, com um par�metro inteiro
void imprime(int valor) {
    cout << "Funcao com argumento inteiro: " << valor << endl;
}
// -----------------------------------------------------------------------------------
// Fun��o sobrecarregada, com um par�metro real
void imprime(float valor) {
    cout << "Funcao com argumento real: " << valor << endl;
}
// -----------------------------------------------------------------------------------

// Fun��o sobrecarregada, com dois par�metros
void imprime(int N1, float N2) {
    cout << "Primeiro valor: " << N1 << endl;
    cout << "Segundo valor: " << N2 << endl;
}
