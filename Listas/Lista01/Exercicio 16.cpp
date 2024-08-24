//Exercicio 16 - Lista de Exercícios 1
//

#include <iostream>
#include <iomanip>
using namespace std;

// -------------------------------------------------------------------------------------------------------
// Função Principal
// -------------------------------------------------------------------------------------------------------
int main() {
    // Declaração das variáveis
    double tamanhoArquivo, velocidadeMbps, tempoDownloadMinutos;

    // Solicita ao usuário o tamanho do arquivo em MB e a velocidade do link em Mbps
    cout << "Digite o tamanho do arquivo para download (em MB): ";
    cin >> tamanhoArquivo;
    cout << "Digite a velocidade do link de internet (em Mbps): ";
    cin >> velocidadeMbps;

    // Converte a velocidade de Mbps para MBps (Megabytes por segundo)
    double velocidadeMBps = velocidadeMbps / 8.0;

    // Calcula o tempo de download em segundos
    double tempoDownloadSegundos = tamanhoArquivo / velocidadeMBps;

    // Converte o tempo de download de segundos para minutos
    tempoDownloadMinutos = tempoDownloadSegundos / 60.0;

    // Exibe o tempo de download formatado com duas casas decimais
    cout << fixed << setprecision(2);
    cout << "Tempo aproximado de download: " << tempoDownloadMinutos << " minutos" << endl;

    return 0;
}
