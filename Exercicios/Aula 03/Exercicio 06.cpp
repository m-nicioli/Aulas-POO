//Exercicio 06: switch
//
// Programa que recebe um n�mero equivalente a um determinado m�s e informa a
// quantidade de dias que ele possui. O programa deve exibir uma mensagem para
// os valores que n�o correspondem a um m�s v�lido.
// -------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

// --------------------------------------------------------------------------------------
// Fun��o Principal
// --------------------------------------------------------------------------------------
int main() {
    // Declara��o das vari�veis
    int mes;

    // Entrada dos dados
    cout << "\n";
    cout << "Estrutura de controle com m�ltipla escolha\n\n";
    cout << "* Informe o n�mero equivalente ao m�s desejado: ";
    cin >> mes;

    // Verifica a quantidade de dias do m�s
    Switch (mes) {

        //Meses com 31 dias
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "\n=> O m�s "<< mes << " possui 31 dias. ";
            break;
        // Meses com 30 dias
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "\n=> O m�s " << mes << " possui 30 dias";
            break;
        // M�s com 28 dias
        case 2:
            cout << "\n O m�s " << mes << " nao existe!";
            break;
        // Valores que n�o correspondem a um m�s
        default:
            cout << "\n=> O m�s " << mes << " nao existe";
    }
    cout << "\n\n\";

    // Fim do programa
    return 0;
}
