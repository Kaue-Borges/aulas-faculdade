#include<iostream>
#include<string>
using namespace std;
char letra;
float valor, valorfinal;

main()
{
	system("chcp 65001"); // para continuar
    // Declaração de variaveis
    
    cout<<"\n Descubra o desconto que vai ter na sua compra\n";
    
    cout<<"\n Digite o valor da sua compra:\n ";
    cin>>valor;
    
	valorfinal = valor;
	
	if (valor > 100)
		{
			valorfinal = valor - (valor * 0.10);			
		 } 
	cout<<"\n Valor original: " << valor;
	cout<<"\n valor final: " << valorfinal;	
}