#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;

// n�o foi usado "using namespace std;" porque o espa�o de nomes std
// j� cont�m um elemento de nome "data", o que causaria um choque 
// com o tipo "data" definido no programa

struct data
{
	short dia;
	short mes;
	short ano;
};

int operator-(data, data);
istream& operator>>(istream& is, data& d);
ostream& operator<<(ostream& os, data d);

int main()
{
	data nasc, hoje;
	
	cout << "Data de nascimento: ";
	cin >> nasc;
	cout << "Data de hoje: ";
	cin >> hoje;

	cout << "Voce tem " << hoje - nasc << " dias de vida." << endl;
}

// subtrair
int operator-(data hoje, data nasc)
{
	const int DiasPorMes = 31;
	const int DiasPorAno = 365;

	// Na data 05/02/2010, temos 1 (um) m�s completo e mais 5 dias em 2010
	// Essa � a justificativa para subtrair 1 do valor do m�s
	int ini = (nasc.ano * DiasPorAno) + ((nasc.mes - 1) * DiasPorMes) + nasc.dia;
	int fim = (hoje.ano * DiasPorAno) + ((hoje.mes - 1) * DiasPorMes) + hoje.dia;

	return fim - ini;
}

// ler
istream& operator>>(istream& is, data& d)
{
	is >> d.dia;
	is.get();
	is >> d.mes;
	is.get();
	is >> d.ano;
	return is;
}

// exibir
ostream& operator<<(ostream& os, data d)
{
	os << d.dia;
	os << '/';
	os << d.mes;
	os << '/';
	os << d.ano;
	return os;
}
