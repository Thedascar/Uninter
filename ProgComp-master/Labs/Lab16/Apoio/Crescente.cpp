#include <iostream>
using namespace std;

// prot�tipo da fun��o
void crescente(int a, int b);

int main()
{
	// chamada da fun��o
	crescente(3, 9);

	return 0;
}

// defini��o da fun��o
void crescente(int a, int b)
{
	for (int i = a; i <= b; i++)
		cout << i << " ";
	cout << endl;
}