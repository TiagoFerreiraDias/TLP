#include <iostream>
#include <string>
#include<locale.h>
void main()
{
    setlocale(LC_ALL, "portuguese");
    using namespace std;
    int i, p = 0;
    string Frase;
    cout << "Fórmula:\n";
    cin >> Frase;
    for (i = 0; i < Frase.size(); i++) {
        if (isupper(Frase[i])) {
            if (p == 0) {
                cout << "1 ";
            }
            p = 0;
        }
        if (isdigit(Frase[i]) && p == 0) {
            cout << " ";
            p = 1;
        }
        cout << Frase[i];
    }//Tá estranho e a aparecer um 1 no inicio mas tá fixe.. odeio o topas
}