#include<iostream>
#include<string>
using namespace std;
char letra;
float temp;

main()
{
	system("chcp 65001"); // para continuar
    // Declaração de variaveis
    
    cout<<"\n Verifique como esta a temperatura hoje \n ";
    
    
    cout<<"\n Informe a temperatura atual: \n";
    cin>> temp;
    
    if (temp< 18)
    {
    	cout << "\n Esta muito friooo";
	}
	else if (temp <= 30)
	{
		cout<< "\n Esta uma temperatura agradavél";
	}
	else
	{
		cout<< "\n Esta muito quente mano";
	}
    
}