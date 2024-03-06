#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	using namespace std;
	srand(time(NULL));
	string nome = "";
	int contador = 0, contador2 = 1, n1, n2, n3, n4, n11 = rand() % 2 + 0, n22 = rand() % 2 + 0, n33 = rand() % 2 + 0, n44 = rand() % 2 + 0, es, numeros[4]{ n11,n22,n33,n44 }, contador3 = 10, i, contador4 = 0;
	cout << "MENU_\n";
	cout << "   Escolhe uma opção\n";
	cout << "   1  - Inserir nome de jogador\n";
	cout << "   2 - Jogar?\n";
	cout << "   0 - para sair\n";
	cin >> es;
	switch (es)
	{
	case (1): {
		cin >> nome;
		es = 2; }
	case (2):
		do {
			for (i = 0; i < 10; i++) {

				cout << nome << " tens " << contador3 << " tentativas\n";
				cout << "advinha os a combinação?";
				cin >> n1;
				if (n1 == numeros[0]) {
					contador++;
				}
				cin >> n2;
				if (n2 == numeros[1]) {
					contador++;
				}
				cin >> n3;
				if (n3 == numeros[2]) {
					contador++;
				}
				cin >> n4;
				if (n4 == numeros[3]) {
					contador++;
				}
				if (contador == 4) {
					cout << "parabens acertaste todos!! com " << contador2 << " tentativas";
					break;
				}
				else {

					cout << "acertaste " << contador << "\n";
					contador2++;
					contador4++;
				}
				contador = 0;
				contador3--;
			}
			if (contador4 == 10) {
				cout << "perdeste por falta de tentativas\n";
			}

		} while (contador4 != 10);
	case (0):
		break;
	}
}