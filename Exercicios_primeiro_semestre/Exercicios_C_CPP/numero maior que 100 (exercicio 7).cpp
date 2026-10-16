//EXERCICIO 7 - Numero maior que 100
#include <iostream>
using namespace std;
 
int numero;
 
int main()
{
	system("chcp 65001");
	cout<<"\nDigite um Numero:\n";
	cin>>numero;
	if (numero >100 )
	  {
        cout << "Esse numero é maior que 100\n ";
    }
    else
    {
        cout << "Esse numero é menor que 100\n ";
    }
 
    return 0;
}