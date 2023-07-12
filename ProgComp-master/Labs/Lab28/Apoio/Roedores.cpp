// definindo e usando uma refer�ncia
#include <iostream>
using namespace std;

int main()
{
	int ratos = 101;
	int & roedores = ratos;  // roedores � uma refer�ncia

	cout << "ratos = " << ratos;
	cout << ", roedores = " << roedores << endl;

	roedores++;

	cout << "ratos = " << ratos;
	cout << ", roedores = " << roedores << endl;

	cout << "endereco de ratos    = " << &ratos << endl;
	cout << "endereco de roedores = " << &roedores << endl;

	return 0;
}