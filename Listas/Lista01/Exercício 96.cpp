#include <iostream>
#include <iomanip> /
using namespace std;

// Fun��o para exibir o padr�o em forma de tri�ngulo
void exibirPadrao(int n) {
    for (int i = 1; i <= n; i++) {
        cout << setw(n - i + 1) << "";
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }

        for (int j = 2; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    exibirPadrao(n);
    return 0;
}
