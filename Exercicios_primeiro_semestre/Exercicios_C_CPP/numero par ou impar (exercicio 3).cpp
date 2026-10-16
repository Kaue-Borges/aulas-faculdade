// EXERCICIO NUMERO 3 - Numero par ou impar
#include <iostream>
using namespace std;
 
int numero;
 
int main()
{
	system("chcp 65001");
    cout << "Digite um numero: ";
    cin >> numero;
 
    if(numero % 2 == 0)
    {
        cout << "Numero PAR\n";
    }
    else
    {
        cout << "Numero IMPAR\n";
    }
 
    return 0;
}