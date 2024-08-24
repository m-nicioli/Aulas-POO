//Exercicio 15 - Lista de Exerc�cios 1
//

#include <iostream>

using namespace std;

// -------------------------------------------------------------------------------------------------------
// Fun��o Principal
// -------------------------------------------------------------------------------------------------------
int main() {

    float salarioPorHora, horasTrabalhadas, salarioBruto,
    salarioLiquido, impostoRenda, INSS, sindicato;

    // Entrada de dados
    cout << "Insira seu salario por hora: ";
    cin >> salarioPorHora;
    cout << "Insira o numero de horas trabalhadas no mes: ";
    cin >> horasTrabalhadas;

    // C�lculos
    salarioBruto = salarioPorHora * horasTrabalhadas;
    impostoRenda = salarioBruto * 0.11;
    INSS = salarioBruto * 0.08;
    sindicato = salarioBruto * 0.05;
    salarioLiquido = salarioBruto - (impostoRenda + INSS + sindicato);

    // Exibi��o dos resultados
    cout << "\n";
    cout << "=> Calculo Salarial" << endl;
    cout << "Salario Bruto..: R$ " << salarioBruto << endl;
    cout << "IR..: R$ " << impostoRenda << endl;
    cout << "INSS..: R$ " << INSS << endl;
    cout << "Sindicato..: R$ " << sindicato << endl;
    cout << "Salario Liquido..: R$ " << salarioLiquido << endl;

    return 0;
}
