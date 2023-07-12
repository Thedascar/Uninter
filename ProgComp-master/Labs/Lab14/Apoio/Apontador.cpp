#include <iostream>
using namespace std;

int main()
{
	int total = 6;     // declara uma vari�vel
	int * ptr;         // declara um ponteiro

	ptr = &total;      // atribui endere�o de total

	cout << "Conteudo de total  = " << total << endl;
	cout << "Conteudo apontado  = " << *ptr << endl;

	cout << "Endereco de total  = " << &total << endl;
	cout << "Conteudo de ptr    = " << ptr << endl;

	*ptr = *ptr + 1;     // altera valor
	cout << "Agora total vale = " << total << endl;

	return 0;
}