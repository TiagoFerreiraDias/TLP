#include <iostream> 
#include <string>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    using namespace std;

    string txt;
    string vogais = "aeiouAEIOU";
    int contarvogais = 0, escolha, i, j;

    cout << "Escolhe uma opção:\n";
    cout << "0 - Sair\n";
    cout << "1 - Contar vogais\n";
    cin >> escolha;

    switch (escolha) {
    case 1: {
        cout << "Escreve uma frase\n";
        cin.ignore();
        getline(cin, txt);

        for (i = 0; i < txt.size(); i++) {
            for (j = 0; j < vogais.size(); j++) {
                if (txt[i] == vogais[j]) {
                    contarvogais++;
                    break;
                }
            }
        }

        cout << "Escreveste " << contarvogais << " vogais nessa frase\n";
        break;
    }
    default:
        break;
    }
}