#include <iostream>
#include <string>
#include<locale.h>
void main()
{
    setlocale(LC_ALL, "portuguese");
    using namespace std;
    int i, p = 0;
    string Frase;
    cout << "F�rmula:\n";
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
    }//T� estranho e a aparecer um 1 no inicio mas t� fixe.. odeio o topas
}