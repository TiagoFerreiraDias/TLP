#include <iostream>
#include<ctime>
#include<cstdlib>
#include <locale.h>

void main() {
    using namespace std;
    setlocale(LC_ALL, "Portuguese");
    int numero, a;
    srand(time(0));
    numero = rand() % 99 + 1;
    do 
    {
        cout << "tente adivinhar o n�mero: \n\n";
        cin >> a;
        if (a < numero)
        {
            cout << "O n�mero � maior do que esse\n";
        }
        else if (a > numero)
        {
            cout << "O n�mero � mais pequeno do que esse\n";
        }
    } while (a != numero);
    cout << "ACERTASTE!!! O n�mero escolhido era o " << numero << ".\n";
}