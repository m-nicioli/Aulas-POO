//Exercicio 06 - Lista de Exercícios 1
//

#include <iostream>
#include <iomanip>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Função Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    //Declaração das váriaveis
    float tempoGasto,kmLitro, quantLitrosViagem, distancia;
    int vMedia;

    //Entrada dos dados
     cout << "* Insira o valor do tempo gasto na viagem: ";
     cin >> tempoGasto;
     cout << "* Agora, insira a velocidade media que foi utilizada na viagem: " ;
     cin >> vMedia;
     cout << "* E, por ultimo, insira a quantidade de quilometros que o"
        " automovel faz com um litro de combustivel: ";
    cin >> kmLitro;


    distancia = tempoGasto * vMedia;
    quantLitrosViagem = distancia / kmLitro;

    //Formatação do resultado
    cout << setprecision(4);
    cout << setiosflags(ios::showpoint);

    // Exibe o resultado
    cout << "\n";
    cout << "O valor da velocidade media feita na viagem foi de: " << vMedia << endl;
    cout << "O valor do tempo gasto na viagem foi de: " << tempoGasto << endl;
    cout << "O valor da distancia total percorrida na viagem foi de: " << distancia << endl;
    cout << "O valor da quantidade de litros de combustivel que foi utilizada na viagem: " << quantLitrosViagem << endl;

    cout << "\n";

    // Fim do programa
    return 0;

}



