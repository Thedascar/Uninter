#include <iostream>
using namespace std;

int main()
{
	cout << "Distancia percorrida em kilometros: ";
	int km;
	cin >> km;
	cout << "Quantidade de combustivel gasto: ";
	int litros;
	cin >> litros;

	// o resultado n�o � mostrado corretamente porque 
	// o programa s� usa vari�veis de tipo inteira e o 
	// resultado fica sempre truncado para um valor inteiro
	cout << "O consumo foi de " << km/litros << "km/litro\n";

	system("pause");
	return 0;
}