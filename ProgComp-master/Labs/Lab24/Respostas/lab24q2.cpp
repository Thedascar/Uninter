#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	int num;
	int tam = 0;

	// l� e exibe arquivo, se ele existir
	ifstream fin;
	fin.open("vet.dat", ios_base::in | ios_base::binary);
	if (fin.is_open())
	{
		cout << "O arquivo vet.dat cont�m:\n";

		// recupera quantidade de elementos
		fin.read((char*) &tam, sizeof(int));

		// l� e exibe cada elemento
		for (int i = 0; i < tam; ++i)
		{
			fin.read((char*) &num, sizeof(int));
			cout << num << " ";
		}
		cout << endl << endl;
	}
	fin.close();

	// sobrescreve arquivo com novos valores
	ofstream fout;
	fout.open("vet.dat", ios_base::out | ios_base::binary);
	
	// escreve a quantidade de elementos
	tam = 0;
	fout.write((char*)& tam, sizeof(int));

	// escreve n�meros digitados
	cout << "Digite n�meros (zero para encerrar):\n";
	while (cin >> num && num != 0)
	{
		fout.write((char*)& num, sizeof(int));
		++tam;
	}

	// atualiza quantidade de elementos no in�cio do arquivo
	fout.seekp(0, ios_base::beg);
	fout.write((char*)& tam, sizeof(int));
	fout.close();

	cout << tam << " n�meros foram armazenados em vet.dat" << endl;
}