// -----------------------------------------------------------------------------------------------
// Exemplo 03: programa para armazenar notas de alunos
// -----------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <algorithm>
#include <stream>

using namespace std;

// -----------------------------------------------------------------------------------------------
// Estruturas
// -----------------------------------------------------------------------------------------------
    string nome;
    vector <float> notas;
    float media
};

// -----------------------------------------------------------------------------------------------
// Protótipos de Funções
// -----------------------------------------------------------------------------------------------

float calcularMedia(const vector<float> &notas);
bool compararNomes(const Cadastro &a, const Cadastro &b);

// -----------------------------------------------------------------------------------------------
// Função Principal
// -----------------------------------------------------------------------------------------------

    cout << endl;
    cout << " * Cadastro de Notas Escolares\n\n";

    // Vetor para armazenar os cadastros dos alunos
    vector <Cadastro> alunos;

    // Total de alunos
    int TotalAlunos;

    // Total de notas
    int TotalNotas;

    // Média global da turma
    float MediaGlobal = 0.0f;

    // Contadores
    int i, j;

    // -----------------------------------------------------------------------------------------------

    // Entrada do total de alunos e do total de notas

    cout << " >> Informe o total de alunos: ";
    cin >> TotalAlunos;

    cout << " >> Informe o total de notas: ";
    cin >> TotalNotas;

    cout << endl;

    // -----------------------------------------------------------------------------------------------

    // Cadastro dos alunos de cada aluno

    // Loop para cadastrar os alunos
    for (i = 0; i < TotalAlunos; ++i) {

        // Estrutura para cadastro dos dados dos alunos
        Cadastro aluno;

        cout << " >> Informe o nome do aluno " << i + 1 << ": ";

        // Entrada do nome do aluno
        // Ignora os espaços em branco deixados no buffer
        getline(cin >> ws, aluno.nome);

        // -----------------------------------------------------------------------------------------------

        cout << "   Informe a linha com as " << TotalNotas << " notas: ";

        // Variável para armazenar a linha com as notas
        string linhaNotas;

        // Entrada da linha de notas
        getline (cin, linhaNotas);

        // Extrair as notas da linha
        istringstream stream(linhaNotas);

        // Variável para armazenar a nota
        float notaTemp;

        // Extrai cada nota da linha e insere no vetos de notas, dentro da estrutura Cadastro
        while (stream >> notaTemp) {
            aluno.notas.push_back(notaTemp);
        }

        // -----------------------------------------------------------------------------------------------

        // Calcula e atribui  a média do aluno
        aluno.media = calcularMedia(aluno.notas);

        // Adicionar o cadastro do aluno dentro do vetor de alunos
        alunos.push_back(aluno);

        // Atualiza as informações sobre a média global da turma
        mediaGlobal += aluno.media;

        // Pula uma linha entre cada aluno
        cout << endl;
}

