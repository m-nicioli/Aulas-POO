//Exercicio 04 - Lista de Exerc�cios 1
//
// Escreva um programa que pe�a para o usu�rio informar quanto ele
// ganha por hora, o nome do m�s e o n�mero de horas que ele trabalhou
// nesse m�s. Em seguida, o programa deve calcular e exibir o sal�rio
// que ele deve receber no final do m�s. Para apresentar o resultado,
// considere a utiliza��o de duas casas decimais.
//

#include <iostream>
#include <iomanip>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------
int main () {
    //Declara��o das v�riaveis
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

    //Formata��o do resultado
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
