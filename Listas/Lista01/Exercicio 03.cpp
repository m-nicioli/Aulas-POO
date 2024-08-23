//Exercicio 03 - Lista de Exerc�cios 1
//
// Escreva um programa que pe�a para o usu�rio informar 4 notas
// bimestrais de um aluno. Em seguida, o programa deve calcular e
// exibir a m�dia final que o aluno obteve. Para apresentar o
// resultado, considere a utiliza��o de duas casas decimais
//

#include <iostream>
#include <iomanip>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------
int main () {
    //Declara��o das v�riaveis
    float N1, N2, N3, N4, Media{0};

    //Entrada dos dados
    cout << "\n";
    cout << "* Informe as quatros bimestrais notas do aluno:" << "\n";
    cin >> N1 >> N2 >> N3 >> N4;

    //Calcula a m�dia do aluno
    Media = (N1 + N2 + N3 + N4) / 4;

    //Formata��o do resultado
    cout << setprecision(3);
    cout << setiosflags(ios::showpoint);

    //Verifica se ele foi aprovado
    if (Media >= 6) {
        cout << "O aluno foi aprovado com media final de " << Media << "!\n";
    }
    cout << "\n";

    // Fim programa
    return 0;
}
