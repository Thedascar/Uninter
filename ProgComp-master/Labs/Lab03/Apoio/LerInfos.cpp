// lerinfos.cpp � entrada e sa�da de dados
#include <iostream>
using namespace std;

int main()
{
	int cenouras;

	cout << "Quantas cenouras voce tem?" << endl;
	cin >> cenouras;  // entrada de dados em C++

	cout << "Aqui estao mais duas. ";
	cenouras = cenouras + 2;

	// concatena a sa�da
	cout << "Agora voce tem " << cenouras << " cenouras." << endl;

	return 0;
}
