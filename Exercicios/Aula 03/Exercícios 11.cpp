// Exercício 11: exemplo de função
//
// Programa que utiliza funções para implementar uma calculadora simples.
// -----------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

// -----------------------------------------------------------------------------------
// Variáveis globais
// -----------------------------------------------------------------------------------

float resultado, N1, N2;

// -----------------------------------------------------------------------------------
// Protótipos de função
// -----------------------------------------------------------------------------------

void entrada();
void saida(string operacao);
void pausa();
void adicao();
void subtracao();
void multiplicacao();
void divisao();

// -----------------------------------------------------------------------------------
// Função Principal
// -----------------------------------------------------------------------------------
int main() {

    // Declaração das variaveis
    int opcao = 0;

    // Laço para escolha da operação desejada
    while (opcao != 5) {
            // Formatação
            cout << setprecision(2);
            cout << setiosflags(ios::right);
            cout << setiosflags(ios::fixed);

            // Cabeçalho
            cout << "\n";
            cout << "--------------------------" << endl;
            cout << "  Programa Calculadora" << endl;
            cout << "     Menu Principal    " << endl;
            cout << "--------------------------" << endl;
            cout << "\n";

            // Opção do menu
            cout << "[1] - Adicao" << endl;
            cout << "[2] - Subtracao" << endl;
            cout << "[3] - Multiplicacao" << endl;
            cout << "[4] - Divisao " << endl;
            cout << "[5] - Encerrar o programa" << endl;
            cout << "\n";

            // Entrada do usuário
            cout << "=> Escolha uma opcao: ";
            cin >> opcao;

            // Se o usuário não deseja encerrar o programa
            if (opcao != 5) {
                // Verifica a opção escolhida
                switch (opcao) {
                    // Adiçao
                case 1:
                    adicao();
                    break;
                    //Subtrção
                case 2:
                    subtracao();
                    break;
                    // Multiplicação
                case 3:
                    multiplicacao();
                    break;
                    // Divisão
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
// Definição das funções
// -----------------------------------------------------------------------------------

// Realiza a entrada dos números que serão utilizados para realizar a operação.

void entrada() {
    cout << "\n";
    cout << "* Informe o primeiro numero: ";
    cin >> N1;
    cout << "* Informe o segundo numero: ";
    cin >> N2;
}
// -----------------------------------------------------------------------------------
// Exibe o resultado da operação
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

    // Laço para receber a entrada do usuário
    do {
        // Obtém a entrada do usuário
        letra = cin.get();

        // Converte para letras maiúsculas
        letra = toupper(letra);
    } while ( letra != 'C');
}

// -----------------------------------------------------------------------------------
// Realiza a operação de adição
void adicao() {
    // Cabeçalho
    cout << "\n";
    cout << "  Rotina de Adicao " << endl;
    cout << "----------------------" << endl;

    // Executa a função para obter os dados
    entrada();

    // Calcula a adição
    resultado = N1 + N2;

    // Executa a função para exibir o resultado
    saida("adicao");
}

// -----------------------------------------------------------------------------------
// Realiza a operação de subtração
void subtracao() {
    // Cabeçalho
    cout << "\n";
    cout << "  Rotina de Subtracao " << endl;
    cout << "----------------------" << endl;

    // Executa a função para obter os dados
    entrada();

    // Calcula a subtração
    resultado = N1 - N2;

    // Executa a função para exibir o resultado
    saida("subtracao");
}

// -----------------------------------------------------------------------------------
// Realiza a operação de multiplicação
void multiplicacao() {
    // Cabeçalho
    cout << "\n";
    cout << "  Rotina de Multiplicacao " << endl;
    cout << "---------------------------" << endl;

    // Executa a função para obter os dados
    entrada();

    // Calcula a multiplicação
    resultado = N1 * N2;

    // Executa a função para exibir o resultado
    saida("multiplicacao");
}

// -----------------------------------------------------------------------------------
// Realiza a operação de divisão
void divisao() {
    // Cabeçalho
    cout << "\n";
    cout << "  Rotina de Divisao " << endl;
    cout << "----------------------" << endl;

    // Executa a função para obter os dados
    entrada();

    // Verifica se não está ocorrendo uma divisão por zero
    if (N2 == 0) {
        cout << "\n";
        cout << "Erro de divisao\n";

        // Simula uma pausa no programa
        pausa();
    }
    // Caso contrário
    else {
    // Calcula a divisao
    resultado = N1 / N2;
    }

    // Executa a função para exibir o resultado
    saida("divisao");
}
