//EXERCICIO 10 - Numero dentro do intervalo 
#include <iostream>
using namespace std;
 
int numero;
 
int main()
{
	system("chcp 65001");
	cout<<"\nDigite um Numero:\n";
	cin>>numero;
	if (numero >= 1 && numero <= 100)
	  {
        cout << "O numero esta dentro do intervalo (1 - 100).";
    }
    else
    {
        cout << "O numero esta fora do intervalo (1 - 100).";
    }
 
    return 0;
}
