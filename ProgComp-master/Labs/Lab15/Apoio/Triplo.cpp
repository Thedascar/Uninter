#include <iostream>
using namespace std;

int main()
{
	double * triplo = new double[3];  // mem�ria para tr�s doubles
	triplo[0] = 0.2;
	triplo[1] = 0.5;
	triplo[2] = 0.8;

	cout << "p3[1] = " << triplo[1] << endl;
	triplo = triplo + 1;   // incrementa o ponteiro
	cout << "Agora p3[0] = " << triplo[0] << endl;
	cout << "Agora p3[1] = " << triplo[1] << endl;
	triplo = triplo - 1;   // retorna ao inicio

	delete[] triplo;  // libera a mem�ria

	return 0;
}