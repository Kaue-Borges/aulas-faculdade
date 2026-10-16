#include<iostream>
#include<string>
using namespace std;
char letra;
int idade;

main()
{
	system("chcp 65001"); // para continuar
    // Declaração de variaveis
    
    cout<<"\n Descubra se você tem idade para votar ou não\n";
	
	cout<<"\n Digite sua idade: ";
    cin>>idade;
    
    	if(idade>= 16)
    		{
    			cout<<"\n Você pode votar";
			}
		else
			{
				cout<<"\n Você não pode votar";
			}
}

			