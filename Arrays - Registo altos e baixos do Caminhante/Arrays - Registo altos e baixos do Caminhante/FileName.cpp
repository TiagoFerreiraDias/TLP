#include <iostream>
#include <string>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    using namespace std;

    int distancia_anteriorkm{}, distancia_anteriorm{}, totalantes{}, totalagora{}, distancia_atualkm{}, distancia_atualm{}, diferen�akm{}, diferen�am{};
    int k = 1;

    cout << "Qual a dist�ncia percorrida na " << k++ << "� caminhada ?\n";
    cin >> distancia_anteriorkm >> distancia_anteriorm;

    do {
        cout << "Qual a dist�ncia percorrida na " << k++ << "� caminhada ?\n";
        cin >> distancia_atualkm >> distancia_atualm;

        totalagora = (distancia_atualkm * 1000) + distancia_atualm;
        totalantes = (distancia_anteriorkm * 1000) + distancia_anteriorm;

        diferen�akm=distancia_atualkm-distancia_anteriorkm;
        diferen�am = distancia_atualm - distancia_anteriorm;

        if (totalagora > totalantes) {
            cout << "ALTO - "<<diferen�akm<<"km "<< diferen�am<<"m\n";
        }else if (totalagora < totalantes) {
            cout << "BAIXO" << diferen�akm << "km " << diferen�am << "m\n";
        }else if (totalagora == totalantes) {
            cout << "PATAMAR\n";
        }

        distancia_anteriorkm = distancia_atualkm;
        distancia_anteriorm = distancia_atualm;

    } while (distancia_atualkm != 0 || distancia_atualm != 0);

}