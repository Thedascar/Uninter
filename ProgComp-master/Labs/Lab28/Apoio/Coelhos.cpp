// definindo e usando uma refer�ncia
#include <iostream>
using namespace std;
int main()
{
	int ratos = 101;
	int & roedores = ratos;  // roedores � uma refer�ncia
	cout << "ratos = " << ratos;
	cout << ", roedores = " << roedores << endl;
	cout << "endere�o de ratos    = " << &ratos << endl;
	cout << "endere�o de roedores = " << &roedores << endl;

	int coelhos = 50;
	roedores = coelhos;   // podemos mudar a refer�ncia?

	cout << "coelhos = " << coelhos;
	cout << ", ratos = " << ratos;
	cout << ", roedores = " << roedores << endl;
	cout << "endere�o de coelhos  = " << &coelhos << endl;
	cout << "endere�o de roedores = " << &roedores << endl;

	return 0;
}
