#include <iostream>
using namespace std;

int main()
{
	// inicializa vetor com a constante string
	char nome[20] = "Joaozinho";
	cout << nome << endl;

	// guarda endere�o do segundo caractere no ponteiro
	char * ptr = &nome[1];
	cout << ptr << endl;

	nome[0] = 'T';   // altera primeira posi��o do vetor
	*ptr = 'i';      // altera elemento apontado
	cout << nome << endl;
	
	return 0;
}