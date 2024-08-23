// Exerc�cio 11: exemplo de fun��o
//
// Programa que utiliza fun��es para implementar uma calculadora simples.
// -----------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

// -----------------------------------------------------------------------------------
// Vari�veis globais
// -----------------------------------------------------------------------------------

float resultado, N1, N2;

// -----------------------------------------------------------------------------------
// Prot�tipos de fun��o
// -----------------------------------------------------------------------------------

void entrada();
void saida(string operacao);
void pausa();
void adicao();
void subtracao();
void multiplicacao();
void divisao();

// -----------------------------------------------------------------------------------
// Fun��o Principal
// -----------------------------------------------------------------------------------
int main() {

    // Declara��o das variaveis
    int opcao = 0;

    // La�o para escolha da opera��o desejada
    while (opcao != 5) {
            // Formata��o
            cout << setprecision(2);
            cout << setiosflags(ios::right);
            cout << setiosflags(ios::fixed);

            // Cabe�alho
            cout << "\n";
            cout << "--------------------------" << endl;
            cout << "  Programa Calculadora" << endl;
            cout << "     Menu Principal    " << endl;
            cout << "--------------------------" << endl;
            cout << "\n";

            // Op��o do menu
            cout << "[1] - Adicao" << endl;
            cout << "[2] - Subtracao" << endl;
            cout << "[3] - Multiplicacao" << endl;
            cout << "[4] - Divisao " << endl;
            cout << "[5] - Encerrar o programa" << endl;
            cout << "\n";

            // Entrada do usu�rio
            cout << "=> Escolha uma opcao: ";
            cin >> opcao;

            // Se o usu�rio n�o deseja encerrar o programa
            if (opcao != 5) {
                // Verifica a op��o escolhida
                switch (opcao) {
                    // Adi�ao
                case 1:
                    adicao();
                    break;
                    //Subtr��o
                case 2:
                    subtracao();
                    break;
                    // Multiplica��o
                case 3:
                    multiplicacao();
                    break;
                    // Divis�o
                case 4:
                    divisao();
                    break;
                }
            }

            // Encerra o programa
            else {
                cout << "\nPrograma encerrado com sucesso!\n\n";
            }
    }
    // Fim do programa
    return 0;
}

// -----------------------------------------------------------------------------------
// Defini��o das fun��es
// -----------------------------------------------------------------------------------

// Realiza a entrada dos n�meros que ser�o utilizados para realizar a opera��o.

void entrada() {
    cout << "\n";
    cout << "* Informe o primeiro numero: ";
    cin >> N1;
    cout << "* Informe o segundo numero: ";
    cin >> N2;
}
// -----------------------------------------------------------------------------------
// Exibe o resultado da opera��o
void saida(string operacao) {
    cout << "\n";
    cout << "=> O resultado da " << operacao;
    cout << " entre " << N1 << " e " << N2;
    cout << " eh " << resultado << "!\n";

    // Simula uma pausa no programa
    pausa();
}

// -----------------------------------------------------------------------------------

// Simula uma pausa no programa
void pausa() {
    char letra;

    cout << "\n";
    cout << "Tecle <C> + <Enter> para voltar ao menu: ";

    // La�o para receber a entrada do usu�rio
    do {
        // Obt�m a entrada do usu�rio
        letra = cin.get();

        // Converte para letras mai�sculas
        letra = toupper(letra);
    } while ( letra != 'C');
}

// -----------------------------------------------------------------------------------
// Realiza a opera��o de adi��o
void adicao() {
    // Cabe�alho
    cout << "\n";
    cout << "  Rotina de Adicao " << endl;
    cout << "----------------------" << endl;

    // Executa a fun��o para obter os dados
    entrada();

    // Calcula a adi��o
    resultado = N1 + N2;

    // Executa a fun��o para exibir o resultado
    saida("adicao");
}

// -----------------------------------------------------------------------------------
// Realiza a opera��o de subtra��o
void subtracao() {
    // Cabe�alho
    cout << "\n";
    cout << "  Rotina de Subtracao " << endl;
    cout << "----------------------" << endl;

    // Executa a fun��o para obter os dados
    entrada();

    // Calcula a subtra��o
    resultado = N1 - N2;

    // Executa a fun��o para exibir o resultado
    saida("subtracao");
}

// -----------------------------------------------------------------------------------
// Realiza a opera��o de multiplica��o
void multiplicacao() {
    // Cabe�alho
    cout << "\n";
    cout << "  Rotina de Multiplicacao " << endl;
    cout << "---------------------------" << endl;

    // Executa a fun��o para obter os dados
    entrada();

    // Calcula a multiplica��o
    resultado = N1 * N2;

    // Executa a fun��o para exibir o resultado
    saida("multiplicacao");
}

// -----------------------------------------------------------------------------------
// Realiza a opera��o de divis�o
void divisao() {
    // Cabe�alho
    cout << "\n";
    cout << "  Rotina de Divisao " << endl;
    cout << "----------------------" << endl;

    // Executa a fun��o para obter os dados
    entrada();

    // Verifica se n�o est� ocorrendo uma divis�o por zero
    if (N2 == 0) {
        cout << "\n";
        cout << "Erro de divisao\n";

        // Simula uma pausa no programa
        pausa();
    }
    // Caso contr�rio
    else {
    // Calcula a divisao
    resultado = N1 / N2;
    }

    // Executa a fun��o para exibir o resultado
    saida("divisao");
}
