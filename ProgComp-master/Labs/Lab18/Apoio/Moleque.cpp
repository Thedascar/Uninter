#include <iostream>
#include <cstring>   // prot�tipo para strcmp()
using namespace std;

int main()
{
	char palavra[8] = "?oleque";

	for (char ch = 'a'; strcmp(palavra, "moleque"); ch++)
	{
		cout << palavra << endl;
		palavra[0] = ch;
	}
	cout << "Palavra = " << palavra << endl;

	return 0;
}
