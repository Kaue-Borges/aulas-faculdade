#include<iostream>
using namespace std;
 
//declaração de variáveis
 
int numero;
 
main ()
{
	system ("chcp 65001");
	cout << "\n\n Verificador de números reais"; 
	cout << "\n\n Digite o número: ";
	cin >> numero; 
	if (numero > 0) {
	 cout << "\n\n O Número digitado é positivo";
	 }
 
    else if  (numero < 0)
    {
    	cout << "\n\n O Número digitado é negativo";
	}
	else 
	{
	  cout << "\n\n O número é igual a zero"; 
    }

 
 
}