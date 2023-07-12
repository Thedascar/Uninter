# include <iostream>
using namespace std;

int main(){

    int dias;
    cout << "Número de dias: ";
    cin >> dias;
    
    int horas = dias * 60;
    cout << " Os " << dias << " dias tem " << horas << " horas "; 
    
    system("pause");
    return 0;
}