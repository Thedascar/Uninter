#include <iostream>
using namespace std;

int main()
{
	constexpr int Tam = 5 * sizeof(int);    // valor constexpr
	const int Max = rand();                 // valor const

	cout << "Tam:" << Tam << endl;          // 20     
	cout << "Max:" << Max << endl;          // n�mero aleat�rio
	
	int val[Tam];                           // ok = Tam � uma constexpr
	//int vet[Max];                           // erro = Max n�o � uma express�o constante

	return 0;
}