#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	cout << "Entre com o texto para analise (@ para sair):\n";
	int brancos = 0, digitos = 0, chars = 0, pont = 0, outros = 0;
	char ch;

	cin.get(ch);       // l� o primeiro caractere
	while (ch != '@')  // testa o caractere sentinela
	{
		if (isalpha(ch)) chars++;         // � uma letra do alfabeto?
		else if (isspace(ch)) brancos++;  // � um caractere de espa�o?
		else if (isdigit(ch)) digitos++;  // � um d�gito?
		else if (ispunct(ch)) pont++;     // � uma pontua��o?
		else outros++;
		cin.get(ch);   // l� o pr�ximo caractere
	}

	cout << chars << " letras, " << digitos << " digitos " << brancos << " espacos, " 
		 << pont << " pontuacoes e " << outros << " outros.\n";

	return 0;
}