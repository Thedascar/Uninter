#include <iostream>
using namespace std;

// defini��o de tipos
enum resultado {Aprovado, Trancado, Reprovado};

union id
{
	char nome[20];
	int matricula;
};

struct aluno
{
	id identidade;
	unsigned disciplina;
	resultado situacao;
};

// prot�tipo da fun��o
void MostraAluno(aluno * ptaluno);

// fun��o principal
int main()
{
	cout << "Digite o tamanho do vetor de alunos: ";
	int tamvet;
	cin >> tamvet;

	aluno * ptvet = new aluno[tamvet];

	// lendo o primeiro aluno para o vetor
	cout << "Aluno #1\n";
	cout << "Matricula: ";
	cin >> ptvet[0].identidade.matricula;
	cout << "Disciplina: ";
	cin >> ptvet[0].disciplina;
	cout << "Situacao: ";
	
	// N�o � poss�vel ler diretamente para o tipo resultado.
	// cin n�o est� preparado para ler valores para um tipo definido pelo programador
	int temp;
	cin >> temp;
	ptvet[0].situacao = resultado(temp);

	MostraAluno(&ptvet[0]);

	delete [] ptvet;
	return 0;
}


void MostraAluno(aluno * ptaluno)
{
	// imprimindo os dados do aluno
	cout << "\nAluno:      " << ptaluno->identidade.matricula << endl;
	cout << "Disciplina: " << ptaluno->disciplina << endl;
	cout << "Situacao:   ";
		 
	// imprimindo a situacao de acordo com o valor lido
	if (ptaluno->situacao == Aprovado)
		cout << "Aprovado" << endl;
	else if (ptaluno->situacao == Trancado)
		cout << "Trancado" << endl;
	else 
		cout << "Reprovado" << endl;
}