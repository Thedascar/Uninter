#include <iostream>
using namespace std;

char ultimo(char texto[]);

int main()
{
	cout << "Digite uma palavra: ";
	char palavra[20];
	cin >> palavra;

	cout << "Em " << palavra << " a ultima letra e " << ultimo(palavra) << "." << endl;

    return 0;
}

char ultimo(char texto[])
{
	// posi��o da �ltima letra
	int pos = strlen(texto) - 1;

	return texto[pos];
}
