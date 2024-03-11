#include<iostream>
#include<locale.h>
using namespace std;
int numero, escolha, i, media, menorn = -2147483647, maiorn = 2147483647;
void media(int media)
{
	numero = numero + numero;
	media = numero / 10;
	cout << "A média é " << media;
	
}
void menor(int menor)
{
	menorn = numero;
	cout << "O menor número é o: " << menorn;
	
}
void maior(int maior)
{
	maiorn = numero;
	cout << "O maior número é o: " << maiorn;
	
}
void main()
{
	setlocale(LC_ALL, "portuguese");
	for (i > 0; i < 10; i++)
	{
		cout << "Diz um numero de 1 a 10 \n";
		cin >> numero;

	}


	cout << "_____MENU_____\n";
	cout << "1 - calcular a média dos números\n";
	cout << "2 - achar o menor?\n";
	cout << "3 - achar o maior\n";
	cout << "0 -sair\n";
	cin >> escolha;

	switch (escolha) {

	case(1): {
		media(numero);
		break;
	}
	case(2): {
		menor(numero);
		break;
	}
	case(3): {
		maior(numero);
		break;
	}
	case(0): {
		break;
	}
	}
}