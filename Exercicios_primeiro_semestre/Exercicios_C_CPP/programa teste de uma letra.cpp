#include<iostream>
#include<string>
using namespace std;
char letra;
main()
{
	system("chcp 65001"); // para continuar
    // Declaração de variaveis
		cout<<"\n PROGRAMA TESTE UMA LETRA";
	cout<<"\n Digite F ou M: ";
	cin>>letra;
	if (letra=='f')
		{
	cout<<"\n F-Feminino"; 
		}
    else
    	{if(letra=='m')
    		{
    			cout<<"\n M-masculino";
			}
		}
	cout<<"\n\n\n";
}

    