// -----------------------------------------------------------------------------------------------
// Exemplo 04: programa para demonstrar o uso de ponteiros para estruturas
// -----------------------------------------------------------------------------------------------

#include <iostream>
#include <string>

using namespace std;

// -----------------------------------------------------------------------------------------------
// Estruturas
// -----------------------------------------------------------------------------------------------

// Definição da estrutura Pokemon
struct Pokemon {

    // Atributos
    string nome;
    string tipo;
    int nivel;
    int hp;

    // Método para aumentar os pontos de vida do Pokémon
    void aumentaHP (int pontos) {
        hp += pontos;
    }
};

// ----------------------------------------------------------------------------------------------
// Função principal
// -----------------------------------------------------------------------------------------------
int main() {

    cout << endl;
    cout << " * Exemplo Pokemon\n\n";

    // Alocando dinamicamente uma estrutura do tipo Pokemon
    Pokemon* ptrPokemon = new Pokemon;

   // Utiliza o ponteiro para atribuir os valores ao Pokemon
   ptrPokemon->nome = "Pikachu";
   ptrPokemon->tipo = "Eletrico";
   ptrPokemon->nivel = 1;
   ptrPokemon->hp = 1;

   // Utiliza o ponteiro para acessar os valores do Pokemon
   cout << " >> Dados do Pokemon\n\n" << endl;
   cout << "Nome: " << ptrPokemon->nome << endl;
   cout << "Tipo: " << ptrPokemon->tipo << endl;
   cout << "Nivel: " << ptrPokemon->nivel << endl;
   cout << "HP: " << ptrPokemon->hp << endl;

   cout << endl;

   cout << " >> Um Pokemon selvagem apareceu... Vamos batalhar!\n\n";
   cout << "Seu Pikachu venceu uma luta muito dificil... ";
   cout << "Ele ganhou 50 pontos!\n";

   // Aumenta o HP do Pokemon
   ptrPokemon->aumentaHP(50);

   cout << "Olhe, o que esta acontecendo? Seu Pikachu esta brilhando!\n";

   // Aumenta o nível do Pikachu
   ptrPokemon->nivel++;

   cout << "O Pikachu subiu de nivel!\n";



}
