#include <iostream>
using namespace std;

void exibir();

int main()
{
	for (int i = 0; i < 5; ++i)
		exibir();
}

void exibir()
{
	// vari�vel est�tica
	static int cont = 1;

	cout << cont++ << endl;
}
