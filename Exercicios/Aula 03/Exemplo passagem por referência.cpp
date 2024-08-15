// Exemplo de Passagem por referência
//
// --------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

void incrementarPorReferencia (int &num) {
    ++num;
    cout << "Dentro da funcao: " << num << endl;
}

int main() {
    int a = 5;
    incrementarPorReferencia(a);
    cout << "Fora da funcao: " << a << endl;
    return 0;
}
