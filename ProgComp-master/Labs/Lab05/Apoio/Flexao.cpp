// flexao.cpp - definindo uma fun��o
#include <iostream>
using namespace std;

void flexao(int);       // prot�tipo da fun��o flexao

int main()
{
	flexao(3);         // chama a fun��o flexao
	cout << "Escolha um numero inteiro: ";
	int cont;
	cin >> cont;
	flexao(cont);      // chama flexao novamente

	return 0;
}

void flexao(int n)
{
	cout << "Faca " << n << " flexoes." << endl;
}
