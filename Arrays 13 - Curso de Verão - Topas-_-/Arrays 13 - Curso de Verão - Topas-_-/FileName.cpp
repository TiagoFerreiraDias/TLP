#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
void main() {
    float pre�o, valor, decimas;
    int dias, pessoas;
    do {
        cout << "Diz o pre�o, dias e pessoas: ";
        cin >> pre�o;
        cin >> dias;
        cin >> pessoas;
    } while (pre�o < 100 || pre�o > 100000);
    pre�o /= 100;
    pre�o -= pre�o * 0.25;
    decimas = pre�o - trunc(pre�o);
    if (decimas > 0.5) {
        valor = trunc(pre�o) + 1;
    }
    else {
        valor = trunc(pre�o) + 0.5;
    }
    pre�o = valor;
    if (dias > 4 && dias < 9) {
        pre�o -= pre�o * 0.4;
        decimas = pre�o - trunc(pre�o);
        if (decimas > 0.5) {
            valor = trunc(pre�o) + 1;
        }
        else {
            valor = trunc(pre�o) + 0.5;
        }
        pre�o = valor;
    }
    else if (dias > 8) {
        pre�o -= pre�o * 0.65;
        decimas = pre�o - trunc(pre�o);
        if (decimas > 0.5) {
            valor = trunc(pre�o) + 1;
        }
        else {
            valor = trunc(pre�o) + 0.5;
        }
        pre�o = valor;
    }
    if (pessoas > 3) {
        pre�o -= pre�o * 0.5;
        decimas = pre�o - trunc(pre�o);
        if (decimas > 0.5) {
            valor = trunc(pre�o) + 1;
        }
        else {
            valor = trunc(pre�o) + 0.5;
        }
    }
    pre�o = valor * 100;
    cout << pre�o;
}