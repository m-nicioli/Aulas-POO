//Exercicio 03: desvio condicional simples

//Programa que permite a leitura de duas notas de um aluno e calcula a m�dia.
//Se essa m�dia for maior ou igual ao valor 6, exibe uma mensagem informando
//que o aluno foi aprovado, juntamente com o valor da m�dia que foi obtida.
// Considere a aprenseta��o dos valores utilizando duas casas decimais.

#include <iostream>
#include <iomanip>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------

int main() {
    //Declara��o das v�riaveis
    float n1, n2, media{0};

    //Entrada dos dados
    cout << "\n";
    cout << "Desvio condicional simples\n\n";
    cout << "* Informe as duas notas do aluno:" << "\n";

    cin >> n1 >> n2;

    //Calcula a m�dia do aluno
    media = (n1 + n2) / 2;

    //Formata��o do resultado
    cout << setprecision(3);
    cout << setiosflags(ios::showpoint);

    //Verifica se ele foi aprovado
    if (media >= 6) {
        cout << "* O aluno foi aprovado com media final de " << media << "!\n";
    }
    cout << "\n";

    // Fim programa
    return 0;
}
