#include <iostream>
using namespace std;
// int main(int argc, char ** argv) chamada para receber informação do S.O.
int main()
{
    system("chcp 1252 > nul");
   cout << "É possivel usar acentos: ";
   char palavra[40];
   cin >> palavra;

   cout << palavra << endl;
   system("pause");
   return 0;
}