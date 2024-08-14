//Exercicio 04: desvio condicional composto

//Programa que permite a leitura de duas notas de um aluno e calcula a média.
//Se o valor da média for menor que 4, informa que o aluno foi reprovado. Se
//o valor da média estiver entre 4 e 6, informa que o aluno deve realizar a
//prova de recuperação (IFA). Se o valor da média for maior ou igual ao valor 6,
//informa que o aluno foi aprovado. O programa deve exibir a situação do aluno, juntamente
//com a média que ele obteve. Considere a apresentação dos valores utilizando duas casas
// decimais

#include <iostream>
#include <iomanip>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Função Principal
// -------------------------------------------------------------------------------------------------------

int main() {
    //Declaração das váriaveis
    float n1, n2, media{0};

    //Entrada dos dados
    cout << "\n";
    cout << "Desvio condicional simples\n\n";
    cout << "* Informe as duas notas do aluno:" << "\n";

    cin >> n1 >> n2;

    //Calcula a média do aluno
    media = (n1 + n2) / 2;

    //Formatação do resultado
    cout << setprecision(3);
    cout << setiosflags(ios::showpoint);

    //Verifica a situação do aluno
    if (media < 4) {
        cout << "* O aluno foi reprovado com média final " << media << "!";
    }
    else if (media >= 4 && media <= 6) {
        cout << "* O aluno obteve a media final " << media << " . Ele deve realizar o IFA.";
    }
    else {
        cout << "* O aluno foi aprovado com media final " << media << "!";
    }
    cout << "\n";

    // Fim programa
    return 0;
}
