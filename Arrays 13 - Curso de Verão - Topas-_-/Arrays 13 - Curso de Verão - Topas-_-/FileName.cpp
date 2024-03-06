#include<iostream>
#include<math.h>
#include<locale.h>
using namespace std;
void main() {
    float preço, valor, decimas;
    int dias, pessoas;
    do {
        cout << "Diz o preço, dias e pessoas: ";
        cin >> preço;
        cin >> dias;
        cin >> pessoas;
    } while (preço < 100 || preço > 100000);
    preço /= 100;
    preço -= preço * 0.25;
    decimas = preço - trunc(preço);
    if (decimas > 0.5) {
        valor = trunc(preço) + 1;
    }
    else {
        valor = trunc(preço) + 0.5;
    }
    preço = valor;
    if (dias > 4 && dias < 9) {
        preço -= preço * 0.4;
        decimas = preço - trunc(preço);
        if (decimas > 0.5) {
            valor = trunc(preço) + 1;
        }
        else {
            valor = trunc(preço) + 0.5;
        }
        preço = valor;
    }
    else if (dias > 8) {
        preço -= preço * 0.65;
        decimas = preço - trunc(preço);
        if (decimas > 0.5) {
            valor = trunc(preço) + 1;
        }
        else {
            valor = trunc(preço) + 0.5;
        }
        preço = valor;
    }
    if (pessoas > 3) {
        preço -= preço * 0.5;
        decimas = preço - trunc(preço);
        if (decimas > 0.5) {
            valor = trunc(preço) + 1;
        }
        else {
            valor = trunc(preço) + 0.5;
        }
    }
    preço = valor * 100;
    cout << preço;
}