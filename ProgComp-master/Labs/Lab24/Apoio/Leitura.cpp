#include <fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("valores.dat", ios_base::in | ios_base::binary);

	// l� a quantidade de elementos e cria vetor din�mico
	unsigned short tam;
	fin.read((char *)&tam, sizeof(unsigned short));
	long * vet = new long[tam];

	// l� elementos para o vetor
	for (unsigned short i = 0; i < tam; ++i)
		fin.read((char *)&vet[i], sizeof(long));

	fin.close();
	delete[] vet;

	return 0;
}
