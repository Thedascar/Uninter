#include <iostream>
using namespace std;

// prot�tipo da fun��o
void inverte(int[], int);

int main()
{
	int nums[5] = { 40, 50, 60, 70, 80 };
	
	// chamada da fun��o
	inverte(nums, 5);

	return 0;
}

// defini��o da fun��o
void inverte(int vet[], int tam)
{
	for (int i = tam - 1; i >= 0; i--)
		cout << vet[i] << " ";
	cout << endl;
}