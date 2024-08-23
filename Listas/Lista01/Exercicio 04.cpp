//Exercicio 04 - Lista de Exercícios 1
//
// Escreva um programa que peça para o usuário informar quanto ele
// ganha por hora, o nome do mês e o número de horas que ele trabalhou
// nesse mês. Em seguida, o programa deve calcular e exibir o salário
// que ele deve receber no final do mês. Para apresentar o resultado,
// considere a utilização de duas casas decimais.
//

#include <iostream>
#include <iomanip>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Função Principal
// -------------------------------------------------------------------------------------------------------
int main () {
    //Declaração das váriaveis
    int horas;
    float salario, porHora;
    string mes;

    //Entrada dos dados
    cout << "\n";
    cout << "* Informe quanto voce ganha por hora: ";
    cin >> porHora;
    cout << "* Informe agora qual mes voce deseja calcular o valor do salario no final do mes: ";
    cin >> mes;
    cout << "* Informe agora quantas horas voce trabalhou nesse mes: ";
    cin >> horas;

    //Calculo do salario
    salario = porHora * horas;

    //Formatação do resultado
    cout << setprecision(3);
    cout << setiosflags(ios::showpoint);

    // Exibe o resultado
    cout << "\n";
    cout << "\n";
    cout << "* Considerando que " << horas << " sejam as suas horas trabalhadas em " << mes;
    cout << " e que voce receba " << porHora << " hora, no final do mes o ";
    cout << " salario sera de: " << salario << endl;

    // Fim do programa
    return 0;
}
