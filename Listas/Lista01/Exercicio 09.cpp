//Exercicio 09 - Lista de Exercícios 1
//

#include <iostream>
#include <iomanip>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Função Principal
// -------------------------------------------------------------------------------------------------------
int main() {

    // Declaração das variáveis
    float P, D, R, PI = 3.141516;

    //Entrada dos dados
     cout << "* Insira o valor da densidade da esfera: ";
     cin >> D;
     cout << "* Agora, insira o valor do raio da esfera: ";
     cin >> R;

     // Calculo do peso
     P = D * 4 * PI * R * R * R / 3;

     // Formatação do resultado
     cout << setprecision(4);
     cout << setiosflags(ios::showpoint);

     // Exibe o resultado
    cout << "\n";
    cout << "O valor do peso de uma esfera eh de: " << P << endl;

    // Fim do programa
    cout << "\n";
    return 0;

}
