// maischar.cpp � o tipo caractere e o tipo inteiro
#include <iostream>
using namespace std;
int main()
{
	char ch = 'M';   // atribui c�digo ASCII do M
	int i = ch;      // armazena mesmo c�digo num int

	cout << "O Codigo ASCII para " << ch << ": " << i << endl;

	cout << "Adicionando 1 ao codigo caractere..." << endl;
	ch = ch + 1;
	i = ch;
	cout << "O Codigo ASCII para " << ch << ": " << i << endl;

	return 0;
}
