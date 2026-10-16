#include<iostream>
#include<string>
using namespace std;
char letra;
int num1, num2;
 
main()
{
	system("chcp 65001"); // para continuar
    // Declaração de variaveis
		cout<<"\n Descubra qual o maior entre os dois numeros\n";

		cout<<"\n Digite o primeiro numero: \n";
		while (! (cin >> num1 ))
	{
		cout << "\n\n Resposta inválida, digite apenas números: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
		cout<<"\n Digite o segundo numero: \n ";
		while (! (cin >> num2 ))
	{
		cout << "\n\n Resposta inválida, digite apenas números: ";
		cin.clear();
		cin.ignore(1000, '\n');
	}
		if(num1>num2)
			{
				cout<<"\n O maior numero é: "<<num1;
				cout<<"\n O menor numero é: "<<num2;
			}
		else if(num2>num1)
			{
				cout<<"\n O maior numero é: "<<num2;
				cout<<"\n O menor numero é: "<<num1;
			}	
	 	else
		    {
				cout<<"\n Os dois numeros são iguais";
			}
}