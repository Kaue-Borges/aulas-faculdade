//calcular o valor final de um produto com desconto percentual
 
#include<iostream>
#include<iomanip> // Necessario para setprecision
using namespace std;
float valor, desconto, valorFinal;
main()
{
	system("chcp 65001");
	cout<<"\n\n Programa com percentual de desconto \n\n";
	cout<<"Qual o valor do produto: \n";
	cin>>valor;
	cout<<"Digite o percentual de desconto (%): \n";
	cin>>desconto;
	// calculo de desconto
	valorFinal = valor - (valor * desconto / 100.0);
	cout<<"\n\n valor final: "<<valorFinal;
  }