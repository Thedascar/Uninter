#include <iostream>
using namespace std;

int main()
{
	char ch;
	int cont = 0;

	cout << "Digite caracteres, use # para sair:\n";
	cin.get(ch);        // l� um caractere
	while (ch != '#')   // testa o caractere
	{
		cout << ch;     // imprime o caractere
		++cont;         // conta o n�mero de caracteres
		cin.get(ch);    // l� o pr�ximo caractere
	}
	cout << endl << cont << " caracteres lidos.\n";

	return 0;
}
