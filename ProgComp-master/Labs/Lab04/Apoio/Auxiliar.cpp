#include <iostream>
using namespace std;

void auxiliar(void);
void outra(void);

int main(void)
{
	// possibilita escrever e ler com acentos: 
	// muda c�digo de p�gina no prompt de comando
	// (deve usar fonte consolas ou lucida console)
	system("chcp 1252 > nul");

	cout << "Um programa em C++ "
	     << "sempre come�a pela "
		 << "fun��o main.\n";

	outra();
	auxiliar();
	
	cout << "mais de uma vez.\n";
	return 0;
}

void auxiliar(void) 
{
	cout << "Fun��es tamb�m podem "
		 << "ser invocadas ";
}

void outra(void) 
{
	cout << "Fun��es podem ser "
		 << "invocadas a partir "
		 << "da fun��o main.\n";

	auxiliar();

	cout << "a partir de " 
		 << "outras fun��es.\n";
}
