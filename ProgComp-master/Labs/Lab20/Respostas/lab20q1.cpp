#include <iostream>
using namespace std;

int main()
{
	int sorteado = rand() % 11;

	cout << "Qual foi o n�mero sorteado (0 a 10)? ";
	int num;
	cin >> num;

	while (num != sorteado)
	{
		if (num > sorteado)
			cout << "Muito alto!" << endl;
		else
			cout << "Muito baixo!" << endl;

		cout << "Tente novamente: ";
		cin >> num;
	}

	cout << "Parab�ns, voc� acertou" << endl;
}