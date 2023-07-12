#include <iostream>
using namespace std;

#define MassaMoleculaAgua 3e-23   // Massa de uma mol�cula de �gua em gramas
#define PesoUmGalao 3800          // Peso de um gal�o em gramas (4 * 950g)

int main()
{
	cout << "Digite a quantidade de galoes de agua: ";
	float galoes;
	cin >> galoes;

	float gramasDeAgua = PesoUmGalao * galoes;
	float moleculasDeAgua = gramasDeAgua / MassaMoleculaAgua;

	cout << "Em " << galoes << " galoes existem " << moleculasDeAgua << " moleculas de agua." << endl;

	return 0;
}